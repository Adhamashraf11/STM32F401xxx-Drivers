
/*
 *  Name        : SYSTIC_interface.h
 *  Created on  : nov, 2023 
 *  Description : this file contains the interfacing of SYSTIC prepherail
 *  Version     : v1.0
 *  Author      : Adham Ashraf Mohamed
 *  LAYER       : MCAL
 *  MCU         : STM32F401xx
 */




#ifndef SYSTIC_INTERFACE_H_
#define SYSTIC_INTERFACE_H_

/**
	Function Name        : MSTK_voidInit
	Function Returns     : void
	Function Arguments   : void
	Function Description : initial the clock source of systick
*/
void MSTK_voidInit (void) ;

/**
	Function Name        : MSTK_voidStopTimer
	Function Returns     : void
	Function Arguments   : void
	Function Description : stop timer
*/
void MSTK_voidStopTimer (void) ;

/**
	Function Name        : MSTK_voidSetBusyWait
	Function Returns     : void
	Function Arguments   : f32 A_f32TimeInMill
	Function Description : delay with selected time
*/
void MSTK_voidSetBusyWait (f32 A_f32TimeInMill) ;

/**
	Function Name        : MSTK_voidSetIntervalSingle
	Function Returns     : void
	Function Arguments   : f32 A_f32TimeInMill , void (*fptr)(void)
	Function Description : go to handler single time
*/
void MSTK_voidSetIntervalSingle (f32 A_f32TimeInMill , void (*fptr)(void)) ;

/**
	Function Name        : MSTK_voidSetIntervalPeriodic
	Function Returns     : void
	Function Arguments   : f32 A_f32TimeInMill , void (*fptr)(void)
	Function Description : go to handler previous time
*/
void MSTK_voidSetIntervalPeriodic (f32 A_f32TimeInMill , void (*fptr)(void)) ;

/**
	Function Name        : MSTK_u32GetElapsedTicks
	Function Returns     : u32
	Function Arguments   : void
	Function Description : return number of elapced ticks
*/
u32  MSTK_u32GetElapsedTicks (void) ;

/**
	Function Name        : MSTK_u32GetRemaningTicks
	Function Returns     : u32
	Function Arguments   : void
	Function Description : return number of remaining ticks
*/
u32  MSTK_u32GetRemaningTicks (void) ;

#endif /*SYSTIC_INTERFACE_H_*/
