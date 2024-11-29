/*
 * Seg_Program.c
 *
 *  Created on: Nov 28, 2024
 *      Author: ASPIRETEC
 */

#include "Seg_Config.h"
#include "Seg_Interface.h"
#include "Seg_Private.h"
#include "util/delay.h"

// Initialize the 7 Segment pins to output
void Seg_vidInit(void) {
	DIO_vidSetPinDirection(SEG_PORT,SEG_PINA,DIO_PIN_OUTPUT);
	DIO_vidSetPinDirection(SEG_PORT,SEG_PINB,DIO_PIN_OUTPUT);
	DIO_vidSetPinDirection(SEG_PORT,SEG_PINC,DIO_PIN_OUTPUT);
	DIO_vidSetPinDirection(SEG_PORT,SEG_PIND,DIO_PIN_OUTPUT);
	DIO_vidSetPinDirection(SEG_PORT,SEG_PINE,DIO_PIN_OUTPUT);
	DIO_vidSetPinDirection(SEG_PORT,SEG_PINF,DIO_PIN_OUTPUT);
	DIO_vidSetPinDirection(SEG_PORT,SEG_PING,DIO_PIN_OUTPUT);
};

void Seg_vidDisplay(u8 Data){

	switch(Data) {
		case 0:
			DIO_vidSetPinValue(SEG_PORT,SEG_PINA,DIO_HIGH);
			DIO_vidSetPinValue(SEG_PORT,SEG_PINB,DIO_HIGH);
			DIO_vidSetPinValue(SEG_PORT,SEG_PINC,DIO_HIGH);
			DIO_vidSetPinValue(SEG_PORT,SEG_PIND,DIO_HIGH);
			DIO_vidSetPinValue(SEG_PORT,SEG_PINE,DIO_HIGH);
			DIO_vidSetPinValue(SEG_PORT,SEG_PINF,DIO_HIGH);
			DIO_vidSetPinValue(SEG_PORT,SEG_PING,DIO_LOW);

		break;
		case 1:
					DIO_vidSetPinValue(SEG_PORT,SEG_PINA,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINB,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINC,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PIND,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINE,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINF,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PING,DIO_LOW);

				break;
		case 2:
					DIO_vidSetPinValue(SEG_PORT,SEG_PINA,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINB,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINC,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PIND,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINE,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINF,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PING,DIO_HIGH);

				break;
		case 3:
					DIO_vidSetPinValue(SEG_PORT,SEG_PINA,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINB,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINC,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PIND,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINE,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINF,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PING,DIO_HIGH);

				break;
		case 4:
					DIO_vidSetPinValue(SEG_PORT,SEG_PINA,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINB,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINC,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PIND,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINE,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINF,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PING,DIO_HIGH);

				break;
		case 5:
					DIO_vidSetPinValue(SEG_PORT,SEG_PINA,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINB,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINC,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PIND,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINE,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINF,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PING,DIO_HIGH);

				break;
		case 6:
					DIO_vidSetPinValue(SEG_PORT,SEG_PINA,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINB,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINC,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PIND,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINE,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINF,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PING,DIO_HIGH);

				break;
		case 7:
					DIO_vidSetPinValue(SEG_PORT,SEG_PINA,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINB,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINC,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PIND,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINE,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINF,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PING,DIO_LOW);

				break;
		case 8:
					DIO_vidSetPinValue(SEG_PORT,SEG_PINA,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINB,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINC,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PIND,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINE,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINF,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PING,DIO_HIGH);

				break;

		case 9:
					DIO_vidSetPinValue(SEG_PORT,SEG_PINA,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINB,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINC,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PIND,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINE,DIO_LOW);
					DIO_vidSetPinValue(SEG_PORT,SEG_PINF,DIO_HIGH);
					DIO_vidSetPinValue(SEG_PORT,SEG_PING,DIO_HIGH);

				break;
		default:
			//Nothing
			break;
	}
};


void Seg_vidCounter(u8 DIO_PINNUM){
	DIO_vidSetPinDirection(BTN_PORT,DIO_PINNUM,DIO_PIN_INPUT);
	u8 PIN_VALUE;
	u8 count=0;
	while(count<11){

	PIN_VALUE = DIO_u8GetPinValue(BTN_PORT,DIO_PINNUM);
	if(PIN_VALUE == DIO_HIGH) {
		_delay_ms(60);
		Seg_vidDisplay(count++);
	}
	if(count == 10){
		count =0;
	}
	}
	};

