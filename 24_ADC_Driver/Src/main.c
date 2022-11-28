#include "stm32f4xx.h"
#include "signals.h"
#include "uart.h"
#include <stdio.h>
#include "arm_math.h"
#include "adc.h"

#define MA_FLTR_PTS   11

#define OFFSET   5

extern float _5hz_signal[HZ_5_SIG_LEN];
extern float32_t input_signal_f32_1kHz_15kHz[KHZ1_15_SIG_LEN];
float32_t output_sig_arr[KHZ1_15_SIG_LEN];

float g_in_sig_sample;
static void plot_input_signal(void);
static void serial_plot_input_sig(void);
static void pseudo_dly(int dly);
static void fpu_enable(void);


uint32_t g_sensor_value ;

int main(){

	// enable fpu
	fpu_enable();

	// configuring clock tree
	clock_100MHz_config();

    //Intialize the uart
    uart2_tx_init();

    // Initialize ADC
    pa1_adc_init();

    // start adc conversion
    start_conversion();




	while(1){
		g_sensor_value = adc_read();
		pseudo_dly(10000);
   }
}


void moving_average(float32_t *sig_src_arr, float32_t *sig_out_arr, uint32_t signal_length,
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

static void serial_plot_both_sig(void) {
	for(int i = 0;i<KHZ1_15_SIG_LEN;i++ ){
		printf("%f,",OFFSET + input_signal_f32_1kHz_15kHz[i]) ;
		printf("%f\r\n", output_sig_arr[i]) ;
		pseudo_dly(90000);
	}
}


static void plot_input_signal(void){

		int i;

		for(i = 0;i<KHZ1_15_SIG_LEN;i++ ){
			g_in_sig_sample = input_signal_f32_1kHz_15kHz[i] ;
			pseudo_dly(90000);
		}
	}

static void serial_plot_input_sig(void) {
	for(int i = 0;i<KHZ1_15_SIG_LEN;i++ ){
		printf("%f\r\n", input_signal_f32_1kHz_15kHz[i]) ;
		pseudo_dly(90000);
	}
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
