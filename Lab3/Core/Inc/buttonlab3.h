/*
 * buttonlab3.h
 *
 *  Created on: Oct 31, 2024
 *      Author: Admin
 */

#ifndef INC_BUTTONLAB3_H_
#define INC_BUTTONLAB3_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int Button1_flag;

int isButton1Pressed();
void getKeyInput();



#endif /* INC_BUTTONLAB3_H_ */
