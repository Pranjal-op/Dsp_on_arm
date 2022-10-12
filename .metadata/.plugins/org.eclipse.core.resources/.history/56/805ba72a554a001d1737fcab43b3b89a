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


int main(){

	// enable fpu
	fpu_enable();

//   Intialize the uart
   uart2_tx_init();



	while(1){


		plot_input_signal();

//		plot_input_signal();


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
