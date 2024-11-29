/*
 * Seg_Interface.h
 *
 *  Created on: Nov 28, 2024
 *      Author: ASPIRETEC
 */

#ifndef HAL_SEG_SEG_INTERFACE_H_
#define HAL_SEG_SEG_INTERFACE_H_
#include "Types.h"
#include "BitMath.h"

void Seg_vidInit(void);
void Seg_vidDisplay(u8 Data);
void Seg_vidCounter(u8 DIO_PINNUM);
#endif /* HAL_SEG_SEG_INTERFACE_H_ */
