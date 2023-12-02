/*
 *  Name        : ADC_config.h
 *  Created on  : nov 6, 2023 
 *  Description : this file contains the configration of ADC prepherail
 *  Version     : v1.0
 *  Author      : Adham Ashraf Mohamed
 *  LAYER       : MCAL
 *  MCU         : STM32F401xx
 */

#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/**set prescaller of ADC clk
   **Options
      *ADC_PRESCALLER_BY_2
      *ADC_PRESCALLER_BY_4
      *ADC_PRESCALLER_BY_6
      *ADC_PRESCALLER_BY_8
*/
#define ADC_PRESCALLER  ADC_PRESCALLER_BY_8

/**set resolution of ADC
   **Options
      *ADC_RESOLUTION_12_BIT
      *ADC_RESOLUTION_10_BIT
      *ADC_RESOLUTION_8_BIT
      *ADC_RESOLUTION_6_BIT
*/
#define ADC_RESOLUTION  ADC_RESOLUTION_12_BIT

/**set Number of channels to be converted
   **Options
      *1
      *2
      *3
      *4
      *5
      *6
      *7
      *8
*/
#define NUMBER_OF_CHANNEL_TO_BE_CONVERTED  2
/*
 * Define ADC_INTERRUPT
  ** Options :
      *ENABLE_INTERRUPT
      *DISABLE_INTERRUPT
 */
#define ADC_INTERRUPT  DISABLE_INTERRUPT
#endif /* ADC_CONFIG_H_ */
