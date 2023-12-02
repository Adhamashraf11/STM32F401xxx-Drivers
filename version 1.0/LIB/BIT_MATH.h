/*
 *  Name        : BIT_MATH.h
 *  Created on  : oct, 2023 
 *  Description : this file contains the libarary of bit nmath
 *  Version     : v1.0
 *  Author      : Adham Ashraf Mohamed
 *  LAYER       : LIB
 *  MCU         : STM32F401xx
 */





#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define REGISTER_SIZE 8
#define WRT_BIT(reg , bit , val) ((reg) = (((reg) & (~(1<<(bit))) ) | ((val) << (bit))))
#define SET_BIT(reg,bit)    reg|=(1<<bit)
#define CLR_BIT(reg,bit)    reg&=(~(1<<bit))
#define TOG_BIT(reg,bit)    reg^=(1<<bit)
#define READ_BIT(reg,bit)   ( (reg & (1<<bit))) >>bit
#define ROR(reg,num)        reg=(reg<<(REGISTER_SIZE-num))|(reg>>(num))
#define ROL(reg,num)        reg= (reg>>(REGISTER_SIZE-num))|(reg<<(num))

#endif /* BIT_MATH_H_ */
