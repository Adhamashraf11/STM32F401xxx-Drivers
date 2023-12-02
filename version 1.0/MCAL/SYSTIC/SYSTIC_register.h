/*
 *  Name        : SYSTIC_register.h
 *  Created on  : nov, 2023 
 *  Description : this file contains the registers of SYSTIC prepherail
 *  Version     : v1.0
 *  Author      : Adham Ashraf Mohamed
 *  LAYER       : MCAL
 *  MCU         : STM32F401xx
 */
 

#ifndef SYSTIC_REGISTER_H_
#define SYSTIC_REGISTER_H_

/*define base address of SysTic*/
#define SYSTIC_BASS_ADRRESS  0xE000E010

/*registers of SysTic*/
typedef struct
{
	u32 CTRL  ;
	u32 LOAD  ;
	u32 VAL   ;
	u32 CALIB ;
}SYSTIC_MemoryMapType;

/*define SysTic*/
#define SYSTIC  ((volatile SYSTIC_MemoryMapType *)(SYSTIC_BASS_ADRRESS))

#endif /* SYSTIC_REGISTER_H_ */
