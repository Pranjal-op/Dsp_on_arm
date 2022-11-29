#include "stm32f4xx.h"
#include "signals.h"
#include "uart.h"
#include <stdio.h>
#include "arm_math.h"
#include "adc.h"
#include "fir_filter.h"

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


uint32_t g_sensor_value ;
fir_filter_type lpf_fir;
uint32_t fltr_sensor_value;

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
    // initialize fir filter

    fir_filter_init(&lpf_fir, LP_1HZ_2HZ_IMPULSE_RESPONCE, IMP_RSP_LENGTH);



	while(1){
		g_sensor_value = adc_read();

		fltr_sensor_value = fir_filter_update(&lpf_fir, g_sensor_value);

		printf("%d,",(int)g_sensor_value);
		printf("%d\n\r",(int)fltr_sensor_value);
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