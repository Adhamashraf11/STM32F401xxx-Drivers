/*
 *  Name        : SYSTIC_config.h
 *  Created on  : nov, 2023 
 *  Description : this file contains the configration of SYSTIC prepherail
 *  Version     : v1.0
 *  Author      : Adham Ashraf Mohamed
 *  LAYER       : MCAL
 *  MCU         : STM32F401xx
 */


#ifndef SYSTIC_CONFIG_H_
#define SYSTIC_CONFIG_H_

/*select clock source of STK
 *Options
 **STK_AHB
 **STK_AHB_DIV_8
 */
#define STK_CLOCK_SOURCE  STK_AHB_DIV_8

/*select enable or disable interrupt of STK
 *Options
 **ENABLE
 **DISABLE
 */
#define STK_INTERRUPT_EN  ENABLE

#endif /* MCAL_SYSTIC_SYSTIC_CONF_H_ */
