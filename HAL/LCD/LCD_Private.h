/*
 * LCD_Private.h
 *
 *  Created on: Nov 27, 2024
 *      Author: ASPIRETEC
 */

#ifndef HAL_LCD_LCD_PRIVATE_H_
#define HAL_LCD_LCD_PRIVATE_H_

#define CLEAR_DISPLAY	0b0000001
#define RETURN_HOME		0b0000010
// Entry Mode Options
#define ENTITY_MODE_DECREMENT	0b00000100
#define ENTITY_MODE_INCREMENT	0b00000110
// Cursor Options
#define ENTRIY_MODE_CURSOR_ON_BLINKON	0b0000	111
#define ENTRY_MODE_CURSOR_ON_NOBLINK	0b0000	110
#define ENTRY_MODE_CURSOR_OFF			0b0000	1100

// Display Functions
#define FUNCTION_SET_4BIT_1LINE

#endif /* HAL_LCD_LCD_PRIVATE_H_ */
