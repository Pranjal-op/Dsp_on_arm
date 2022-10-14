#include "stm32f4xx.h"
#include "signals.h"
#include "uart.h"
#include <stdio.h>
#include "arm_math.h"

#define OFFSET1    5
#define OFFSET2    10

extern float _5hz_signal[HZ_5_SIG_LEN];
extern float32_t input_signal_f32_1kHz_15kHz[KHZ1_15_SIG_LEN];
extern float32_t  impulse_response[IMP_RSP_LENGTH];

float32_t output_signal_arr[KHZ1_15_SIG_LEN + IMP_RSP_LENGTH -1];

float g_in_sig_sample;
float g_imp_rsp_sample;
static void plot_input_signal(void);
static void serial_plot_input_sig(void);
static void plot_impulse_response(void);
static void serial_plot_impulse_response(void);
static void serial_plot_output_sig(void);
void serial_plot_all(void);

void convolution(float32_t * sig_src_arr,
		         float32_t * sig_dest_arr,
				 float32_t * imp_response_arr,
				 uint32_t    sig_src_length,
				 uint32_t    imp_response_length);

static void pseudo_dly(int dly);
static void fpu_enable(void);



int main(){

	// enable fpuloat32_t g_mean_value;

	fpu_enable();

//   Intialize the uart
   uart2_tx_init();



     convolution((float32_t  *) input_signal_f32_1kHz_15kHz,
   		         (float32_t *) output_signal_arr,
   				 (float32_t *) impulse_response,
   				 (uint32_t)    KHZ1_15_SIG_LEN,
   				 (uint32_t)    IMP_RSP_LENGTH);



	while(1)
	{
		serial_plot_all();

   }
}


void convolution(float32_t * sig_src_arr,
		         float32_t * sig_dest_arr,
				 float32_t * imp_response_arr,
				 uint32_t    sig_src_length,
				 uint32_t    imp_response_length)
{
	uint32_t i,j;
	/*compute output signal length*/
	uint32_t sig_dest_length = sig_src_length + imp_response_length - 1;
	/*clear output signal buffer*/
	for(i = 0; i < sig_dest_length; i++)
	{
		sig_dest_arr[i] =0;
	}
	/*perform convolution */
	for(i =0; i < sig_src_length ; i++ )
	{
		for(j =0; j <imp_response_length; j++)
		{
			sig_dest_arr[i+j] = sig_dest_arr[i+j] + sig_src_arr[i]*imp_response_arr[j];
		}
	}
}

static void plot_impulse_response(void)
{
	for( int i = 0; i < IMP_RSP_LENGTH; i++ )
	{
		g_imp_rsp_sample = impulse_response[i];
		pseudo_dly(90000);
	}
}

static void serial_plot_impulse_response(void)
{
	for( int i = 0; i < IMP_RSP_LENGTH; i++ )
	{
		printf("%f\r\n", impulse_response[i]);
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

static void serial_plot_input_signal(void){

		int i;

		for(i = 0;i<KHZ1_15_SIG_LEN;i++ ){
			g_in_sig_sample = input_signal_f32_1kHz_15kHz[i] ;
			pseudo_dly(90000);
		}
	}
static void serial_plot_input_sig(void)
{
	for(int i = 0;i<KHZ1_15_SIG_LEN;i++ )
	{
		printf("%f\r\n", input_signal_f32_1kHz_15kHz[i]) ;
		pseudo_dly(90000);
	}
}
static void serial_plot_output_sig(void)
{
	for(int i = 0;i< (KHZ1_15_SIG_LEN + IMP_RSP_LENGTH -1);i++ )
	{
		printf("%f\r\n", output_signal_arr[i]) ;
		pseudo_dly(90000);
	}
}


void serial_plot_all(void)
{
	uint32_t i,j,k;
	i=j=0;
	for( k=0; k<(KHZ1_15_SIG_LEN + IMP_RSP_LENGTH -1); k++ )
	{
		i++;
		j++;
		if( i==KHZ1_15_SIG_LEN){
			i=0;
		}
		if( j==IMP_RSP_LENGTH){
			j=0;
		}
		printf("%f,",OFFSET1 + input_signal_f32_1kHz_15kHz[i]);
		printf("%f,",OFFSET2 + impulse_response[j]);
		printf("%f\n\r",output_signal_arr[k]);
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
