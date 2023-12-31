/*
 *  Name        : RCC_config.h
 *  Created on  : oct 29, 2023 
 *  Description : this file contains the configration of RCC prepherail
 *  Version     : v1.0
 *  Author      : Adham Ashraf Mohamed
 *  LAYER       : MCAL
 *  MCU         : STM32F401xx
 */


#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

/*PLL configurations
    *Range of PLLM    2   ---> 63
    *Range of PLLN    192 ---> 432
    *Range of PLLP    2 , 4 , 6 , 8
 *Fout = (Fin * PLLN)/(PLLM * PLLP)    up to 84 MHZ
 */
#define PLLM   32
#define PLLN   312
#define PLLP   4

/*Enable/Disable clock security system
 *Options
   **ENABLE
   **DISABLE
 */
#define RCC_CSS_ENABLE    ENABLE

/*System clock selection
 *Options
  **HSI  (High Speed Internal clock 16 MHZ)
  **HSE  (High Speed External clock 16 MHZ)
  **PLL  (Phase Locked Loop   up to 84 MHZ)
 */
#define SYSTEM_CLOCK  HSE

/*AHB Prescaler
 *Options
  **NOT_DIVISION
  **DIVISION_2
  **DIVISION_4
  **DIVISION_8
  **DIVISION_16
  **DIVISION_64
  **DIVISION_128
  **DIVISION_256
  **DIVISION_512
 **/
#define AHB_PRESCALER  NOT_DIVISION

/*APB1 Prescaler
 *Options
  **NOT_DIVISION
  **DIVISION_2
  **DIVISION_4
  **DIVISION_8
  **DIVISION_16
 */
#define APB1_PRESCALER NOT_DIVISION

/*APB2 Prescaler
 *Options
  **NOT_DIVISION
  **DIVISION_2
  **DIVISION_4
  **DIVISION_8
  **DIVISION_16
 */
#define APB2_PRESCALER NOT_DIVISION

#define PLL_INPUT  HSE

/*Enable / Disable the select clock source */
#define RCC_HSE_ENABLE		ENABLE
#define RCC_HSI_ENABLE		DISABLE
#define RCC_PLL_ENABLE		DISABLE


#endif /* RCC_CONFIG_H_ */


