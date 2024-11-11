/*
 * buttonlab3.c
 *
 *  Created on: Oct 31, 2024
 *      Author: Admin
 */

#include "buttonlab3.h"

int Button1_flag = 0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;
int timerforKeyPress = 200;

int isButton1Pressed(){
	if(Button1_flag == 1){
		Button1_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(){
	Button1_flag = 1;
}

void getKeyInput(){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if(KeyReg3 != KeyReg2){
			KeyReg3 = KeyReg2;
			if(KeyReg2 == PRESSED_STATE){
				//TODO
				subKeyProcess();
				timerforKeyPress = 200;
			}
		}else{
			timerforKeyPress--;
			if(timerforKeyPress == 0){
				//TODO
				if(KeyReg2 == PRESSED_STATE){
					subKeyProcess();
				}
				timerforKeyPress = 200;
			}
		}
	}
}
