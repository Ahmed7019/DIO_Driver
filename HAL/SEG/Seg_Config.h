/*
 * Seg_Config.h
 *
 *  Created on: Nov 28, 2024
 *      Author: ASPIRETEC
 */

#ifndef HAL_SEG_SEG_CONFIG_H_
#define HAL_SEG_SEG_CONFIG_H_

#include "DIO_Interface.h"

// The port
#define SEG_PORT	DIO_PORTA
//Choose the port you want to use the button in
#define BTN_PORT	DIO_PORTC
// Define pins
#define SEG_PINA	DIO_PIN0
#define SEG_PINB	DIO_PIN1
#define SEG_PINC	DIO_PIN2
#define SEG_PIND	DIO_PIN3
#define SEG_PINE	DIO_PIN4
#define SEG_PINF	DIO_PIN5
#define SEG_PING	DIO_PIN6


#endif /* HAL_SEG_SEG_CONFIG_H_ */
