/*
 * global.h
 *
 *  Created on: Nov 11, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "timerlab3.h"
#include "buttonlab3.h"
#include "main.h"

#define INIT			1
#define AUTO_RED		2
#define AUTO_GREEN		3
#define AUTO_YELLOW		4

#define MAN_RED		11
#define MAN_GREEN	12
#define MAN_YELLOW	13

extern int status1;
extern int status2;

void setINIT();
void setRED1();
void setGREEN1();
void setYELLOW1();
void setRED2();
void setGREEN2();
void setYELLOW2();


#endif /* INC_GLOBAL_H_ */
