#include "clock.h"
#include "stm32f4xx.h"

#define PLL_M      4
#define PLL_N      200
#define PLL_P      4
#define PLL_Q      9

/*
 * System clock source = HSE
 * SYSCLK              = 100Hz
 * HCLK                = 100Hz
 * AHB Prescaler       = 1
 * APB1 Prescaler      = 2
 * APB2 Prescaler      = 1
 * HSE                 = 8MHz
 */


void clock_100MHz_config(void){

	// enable HSE oscillator
	RCC-> CR |= RCC_CR_HSEON ;

	// wait to HSERDY goes LOW
	while((RCC-> CR & RCC_CR_HSERDY ) == (RCC_CR_HSERDY)){};
	//set HCLK Prescaler
	RCC->CFGR &=~RCC_CFGR_HPRE;
	RCC->CFGR |= RCC_CFGR_HPRE_DIV1;

	//set APB1 Prescaler
	RCC->CFGR &=~ RCC_CFGR_PPRE1;
	RCC->CFGR |= RCC_CFGR_PPRE1_DIV2;

	//set APB2 Prescaler
	RCC->CFGR &=~ RCC_CFGR_PPRE2;
	RCC->CFGR |= RCC_CFGR_PPRE2_DIV1;

	//configure PLL (phase Locked loop)
	RCC->PLLCFGR = PLL_M | (PLL_N << 6)| (((PLL_P >>1)-1) <<16) | (RCC_PLLCFGR_PLLSRC_HSE)|(PLL_Q<<24);

	//Turn PLL ON
	RCC->CR |= RCC_CR_PLLON;
	//Wait for PLL to come ON
	while((RCC->CR & RCC_CR_PLLRDY) ==0){}

	//Set flash Latency
	FLASH->ACR &=~ FLASH_ACR_LATENCY;
	FLASH->ACR |= FLASH_ACR_LATENCY_3WS;

	// select the main PLL as the clock source
	RCC->CFGR &=~RCC_CFGR_SW;
	RCC->CFGR |= RCC_CFGR_SW_PLL;

	// Wait for main PLL to be used as the clock Source
	while((RCC->CFGR & RCC_CFGR_SWS) != RCC_CFGR_SWS_PLL){}


}
