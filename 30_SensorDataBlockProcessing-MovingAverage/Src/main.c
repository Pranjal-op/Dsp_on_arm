#include "stm32f4xx.h"
#include "signals.h"
#include "uart.h"
#include <stdio.h>
#include "arm_math.h"
#include "adc.h"
#include "fir_filter.h"
#include "fifo.h"
#include "tim.h"

#define OFFSET   10
#define MA_FLTR_PTS   11

#define INPUT_SIG_LEN  RXFIFOSIZE

extern float LP_1HZ_2HZ_IMPULSE_RESPONCE[IMP_RSP_LENGTH];

uint32_t output_sig_arr[INPUT_SIG_LEN];

uint8_t g_fifo_full_flg , g_process_flg;

static void plot_input_signal(void);
static void serial_plot_input_sig(void);
static void pseudo_dly(int dly);
static void fpu_enable(void);
static void clear_data_buffer(void);

rx_dataType sensor_data_buffer[RXFIFOSIZE];
static uint8_t read_fifo(rx_dataType *data_buff);

void moving_average(uint32_t *sig_src_arr, uint32_t *sig_out_arr, uint32_t signal_length,
		uint32_t filter_pts);


int main(){


	// enable fpu
 	fpu_enable();

	// configuring clock tree
	clock_100MHz_config();

    //Intialize the uart
    uart2_tx_init();

    // Initialize ADC
    pa1_adc_init();

    // Enable background thread
    tim2_1khz_interrupt_init();

    // start adc conversion
    start_conversion();

    // initializing fifo
     rx_fifo_init();

	while(1){

		// if g_process_flg is set to 1 , do dsp processing

		if(g_process_flg){
			// 1 reset data buffer
			clear_data_buffer();

			// 2 read fifo content into databuffer
			for(int i = 0; i<RXFIFOSIZE ; i++){

				// wait until entire batch is collected from adc
				while(g_fifo_full_flg==1){}

				// read data into data _buff
				g_fifo_full_flg = read_fifo(sensor_data_buffer + i);
			}
			// perform digital signal processing
			moving_average((uint32_t *)sensor_data_buffer, (uint32_t *)output_sig_arr, (uint32_t) INPUT_SIG_LEN,
					(uint32_t) MA_FLTR_PTS);


			for(int i =0; i< (INPUT_SIG_LEN ); i++ ){


				printf("%d,",(int)(OFFSET+sensor_data_buffer[i]));

				printf("%d\n\r",(int)output_sig_arr[i]);
			}

			// reset process flag
			g_process_flg = 0;
		}
   }
}
static uint8_t read_fifo(rx_dataType *data_buff){

	__IO uint8_t rd_flg;
	// place fifo data into data buff
	rd_flg = rx_fifo_get(data_buff);

	// if fifo is empty than reset g_fifo_full_flag
	if(rd_flg==0){

		// this will start the fifo _put routine again to collect
		// the next batch of sample
		g_fifo_full_flg = 1;
	}
	else{
		// keep g_fifo_full_flag at fifo full
		g_fifo_full_flg = 0;

	}
	return g_fifo_full_flg;

}

static void clear_data_buffer(void){
	for(int i =0; i< RXFIFOSIZE ; i++){
		sensor_data_buffer[i]=0;
	}
}

static void tim2_callback(void){

	//check if fifo is not full
	if(g_fifo_full_flg == 1){// not full

		g_fifo_full_flg = rx_fifo_put(adc_read());
	}
	else{ // deal with full fifo

		g_process_flg = 1;
	}
}

void TIM2_IRQHandler(void){
	// clear interrupt flag
	TIM2->SR &=~ SR_UIF;
	// do something
	tim2_callback();

}



static void pseudo_dly(int dly){

		for(int i = 0;i<dly;i++){

		}
	}

static void fpu_enable(void){
	/* enabling floating point unit */
	   /*SCB-> CPACR |=((3UL << 10*2) | (3UL << 11*2)) ;*/
		// More readable way to enable the fpu

	   SCB ->CPACR |=(1U<<20);
	   SCB-> CPACR |=(1U<<21);
	   SCB-> CPACR |=(1U<<22);
	   SCB-> CPACR |=(1U<<23);

}

void moving_average(uint32_t *sig_src_arr, uint32_t *sig_out_arr, uint32_t signal_length,
		uint32_t filter_pts){

	int i,j;

	for(i = floor(filter_pts/2); i < (signal_length - (filter_pts/2))-1; i++ ){

		sig_out_arr[i] = 0;

		for(j = -(floor(filter_pts/2)); j <floor((filter_pts/2));j++){

			sig_out_arr[i] = sig_out_arr[i] + sig_src_arr[i+j];
		}

		sig_out_arr[i] = sig_out_arr[i]/filter_pts;
	}

}
