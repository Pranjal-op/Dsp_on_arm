#include "stm32f4xx.h"
#include "signals.h"
#include "uart.h"
#include <stdio.h>
#include "arm_math.h"

extern float _5hz_signal[HZ_5_SIG_LEN];
extern float32_t input_signal_f32_1kHz_15kHz[KHZ1_15_SIG_LEN];

float g_in_sig_sample;
static void plot_input_signal(void);
static void serial_plot_input_sig(void);
static void pseudo_dly(int dly);
static void fpu_enable(void);
static float32_t signal_mean(float32_t *sig_src_arr, uint32_t sig_length);

float32_t g_mean_value;

int main(){

	// enable fpu
	fpu_enable();

//   Intialize the uart
   uart2_tx_init();
   g_mean_value = signal_mean((float32_t *)input_signal_f32_1kHz_15kHz, (uint32_t) KHZ1_15_SIG_LEN);


	while(1){


		serial_plot_input_sig();

//		plot_input_signal();


   }
}
static float32_t signal_mean(float32_t *sig_src_arr, uint32_t sig_length){
	float32_t _mean =0.0;
	uint32_t i;

	for(i=0;i<sig_length;i++){
		_mean = _mean + sig_src_arr[i];
	}

	_mean = _mean/(float32_t)sig_length;
	return _mean;
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
