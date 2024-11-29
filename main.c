/*
 * main.c
 *
 *  Created on: Nov 25, 2024
 *      Author: ASPIRETEC
 */

#include "Types.h"
#include "BitMath.h"


#include "DIO_Interface.h"
#include "Seg_Interface.h"


#include "util/delay.h"
// COMMON


// HAL


// MCAL

int main(){
	// A0 -> Output
	Seg_vidInit();

		Seg_vidCounter(DIO_PIN0);
	while(1){
		_delay_ms(250);
	}
	return 0;

}
