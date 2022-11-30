#include"uart.h"

#define GPIOAEN (1U<<0)
#define UART2EN (1U<<17)
//#define SYS_FREQ	16000000
//#define APB1_CLK	SYS_FREQ

#define SYS_FREQ	100000000
#define APB1_CLK	(SYS_FREQ/2)

#define CR1_TE	(1U<<3)
#define CR1_UE	(1U<<13)

#define SR_TXE 	(1U<<7)


#define UART_BAUDRATE	115200
static void uart2_set_baudrate(uint32_t periph_clk, uint32_t baudrate);


void uart2_write(int ch);

int __io_putchar(int ch){
	uart2_write(ch);
	return ch;
}

 void uart2_tx_init(){

	 /*steps
	  * configure uart gpio pin */
	 /* enable clock acess to gpioA*/
	 RCC->AHB1ENR |= GPIOAEN;


	  /* set pa2 mode to alternate function mode*/
	 GPIOA->MODER &=~(1U<<4);
	 GPIOA->MODER |= (1U<<5);
	 /* set pa2 alternate function type to uart_tx(af07)*/

	 GPIOA->AFR[0] |= (1U<<8);
	 GPIOA->AFR[0] |= (1U<<9);
	 GPIOA->AFR[0] |= (1U<<10);
	 GPIOA->AFR[0] &=~ (1U<<11);

	 /* configure uart */
	 /* Enable clock acess to uart2*/
	 RCC -> APB1ENR |= UART2EN;
	 /*configure baudrate*/
	 uart2_set_baudrate(APB1_CLK, UART_BAUDRATE);


	 /*configure the transfer direction*/

	  USART2-> CR1 = CR1_TE;

	  /* enable uart module*/

	  USART2->CR1|= CR1_UE;

 }


 void uart2_write(int ch) {
//	 Make sure to transmit data register is empty
	 while(!(USART2-> SR & SR_TXE)){}

	 //	 Write to the transmit  data register
	 USART2-> DR = (ch & 0xFF);
 }

 static uint16_t compute_uart_bd(uint32_t periph_clk, uint32_t baudrate){

 	return ((periph_clk + (baudrate/2U))/ baudrate);
  }


 static void uart2_set_baudrate(uint32_t periph_clk, uint32_t baudrate){
	 USART2->BRR = compute_uart_bd(periph_clk, baudrate);
 }


