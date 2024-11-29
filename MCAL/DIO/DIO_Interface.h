/*
 * DIO_Interfave.h
 *
 *  Created on: Nov 25, 2024
 *      Author: ASPIRETEC
 */

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_

#include "Types.h"

// Define the Ports
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

// Define the Pins
#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

// Pin Directions
#define DIO_PIN_INPUT	0
#define DIO_PIN_OUTPUT	1

void DIO_vidSetPinDirection(u8 PortNum,u8 PinNum,u8 PinDir);
void DIO_vidSetPinValue(u8 PortNum,u8 PinNum,u8 PinDir);
u8 DIO_u8GetPinValue(u8 PortNum,u8 PinNum);
void DIO_vidTogPinValue(u8 PortNum,u8 PinNum);
void DIO_vidSetPortDirection(u8 PortNum,u8 PortDir);
void DIO_vidSetPortValue(u8 PortNum,u8 PortValue);
void DIO_vidTogPortValue(u8 PortNum);


// Define High & Low
#define DIO_LOW	0
#define DIO_HIGH 1

#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
