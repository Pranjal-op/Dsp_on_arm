#include "stm32f4xx.h"
#include "signals.h"
#include "uart.h"
#include <stdio.h>
#include "arm_math.h"
#include "adc.h"
#include "fir_filter.h"
#include "fifo.h"

#define OFFSET   5

extern float LP_1HZ_2HZ_IMPULSE_RESPONCE[IMP_RSP_LENGTH];
extern float _5hz_signal[HZ_5_SIG_LEN];
extern float32_t input_signal_f32_1kHz_15kHz[KHZ1_15_SIG_LEN];
float32_t output_sig_arr[KHZ1_15_SIG_LEN];

float g_in_sig_sample;
static void plot_input_signal(void);
static void serial_plot_input_sig(void);
static void pseudo_dly(int dly);
static void fpu_enable(void);

uint32_t my_rx_data[50];

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

    // initializing fifo
    void rx_fifo_init();

    for(int i = 0; i< 50; i++){
    	rx_fifo_put(adc_read());
    }
    uint32_t rx_data;

    for(int i = 0; i< 50; i++){
    	rx_fifo_get(&rx_data);
    	my_rx_data[i] = rx_data;
    }
	while(1){

		pseudo_dly(10000);
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