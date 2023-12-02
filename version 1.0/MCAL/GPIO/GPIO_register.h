/*
 *  Name        : GPIO_register.h
 *  Created on  : nov, 2023 
 *  Description : this file contains the registers of GPIO prepherail
 *  Version     : v1.0
 *  Author      : Adham Ashraf Mohamed
 *  LAYER       : MCAL
 *  MCU         : STM32F401xx
 */
 


#ifndef GPIO_REGISTER_H_
#define GPIO_REGISTER_H_

/*define base address of GPIOA*/
#define GPIOA_BASE_ADDRESS   0x40020000

/*define base address of GPIOB*/
#define GPIOB_BASE_ADDRESS   0x40020400

/*define base address of GPIOC*/
#define GPIOC_BASE_ADDRESS   0x40020800

/*registers of GPIOx*/
typedef struct
{
	u32 MODER  ;
    u32 OTYPER ;
    u32 OSPEEDR;
    u32 PUPDR  ;
    u32 IDR    ;
    u32 ODR    ;
    u32 BSRR   ;
    u32 LCKR   ;
    u32 AFRL   ;
    u32 AFRH   ;
}GPIO_MemoryMapType;

/*define GPIOA*/
#define GPIOA ((volatile GPIO_MemoryMapType *)(GPIOA_BASE_ADDRESS))

/*define GPIOB*/
#define GPIOB ((volatile GPIO_MemoryMapType *)(GPIOB_BASE_ADDRESS))

/*define GPIOC*/
#define GPIOC ((volatile GPIO_MemoryMapType *)(GPIOC_BASE_ADDRESS))

#endif /* GPIO_REGISTER_H_ */
