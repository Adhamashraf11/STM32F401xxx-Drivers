/*
 *  Name        : RCC_register.h
 *  Created on  : oct 29, 2023 
 *  Description : this file contains the registers of RCC prepherail
 *  Version     : v1.0
 *  Author      : Adham Ashraf Mohamed
 *  LAYER       : MCAL
 *  MCU         : STM32F401xx
 */
 

#ifndef RCC_REGISTER_H_
#define RCC_REGISTER_H_

/*base address of RCC Peripheral*/
#define RCC_BASE_ADDRES  0x40023800

/*registers of RCC Peripheral*/
typedef struct
{
	u32 CR         ;
	u32 PLLCFGR    ;
	u32 CFGR       ;
	u32 CIR        ;
	u32 AHB1RSTR   ;
	u32 AHB2RSTR   ;
	u32 RESERVED1  ;
	u32 RESERVED2  ;
	u32 APB1RSTR   ;
	u32 APB2RSTR   ;
	u32 RESERVED3  ;
    u32 RESERVED4  ;
	u32 AHB1ENR    ;
	u32 AHB2ENR    ;
	u32 RESERVED5  ;
    u32 RESERVED6  ;
    u32 APB1ENR    ;
    u32 APB2ENR    ;
    u32 RESERVED7  ;
    u32 RESERVED8  ;
    u32 AHB1LPENR  ;
    u32 AHB2LPENR  ;
    u32 RESERVED9  ;
    u32 RESERVED10 ;
    u32 APB1LPENR  ;
    u32 APB2LPENR  ;
    u32 RESERVED11 ;
    u32 RESERVED12 ;
    u32 BDCR       ;
    u32 CSR        ;
    u32 RESERVED13 ;
    u32 RESERVED14 ;
	u32 SSCGR      ;
	u32 PLLI2SCFGR ;
	u32 DCKCFGR    ;
}RCC_MemoryMapType;

/*define the RCC with its base address*/
#define RCC  ((volatile RCC_MemoryMapType *)(RCC_BASE_ADDRES))

#endif /* RCC_REGISTER_H_ */
