/*
 * global.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Admin
 */

#include "global.h"

int status = 0;
int count = 1;
int count_1 = 0;
int count_2 = 0;

int red_time = 0;
int green_time = 0;
int yellow_time = 0;
int new_red_time = 5;
int new_green_time = 3;
int new_yellow_time = 2;
int const_x = 0;
int const_y = 0;
int const_z = 0;

void setINIT(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_RESET);
}
void setRED1(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
}
void setGREEN1(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET);
}
void setYELLOW1(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET);
}
void setRED2(){
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_RESET);
}
void setGREEN2(){
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_RESET);
}
void setYELLOW2(){
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);
}

void seg1_0(){
	HAL_GPIO_WritePin(LED_1_0_GPIO_Port, LED_1_0_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_1_GPIO_Port, LED_1_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_2_GPIO_Port, LED_1_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_3_GPIO_Port, LED_1_3_Pin, GPIO_PIN_RESET);
}
void seg1_1(){
	HAL_GPIO_WritePin(LED_1_0_GPIO_Port, LED_1_0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_1_GPIO_Port, LED_1_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_2_GPIO_Port, LED_1_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_3_GPIO_Port, LED_1_3_Pin, GPIO_PIN_RESET);
}
void seg1_2(){
	HAL_GPIO_WritePin(LED_1_0_GPIO_Port, LED_1_0_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_1_GPIO_Port, LED_1_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_2_GPIO_Port, LED_1_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_3_GPIO_Port, LED_1_3_Pin, GPIO_PIN_RESET);
}
void seg1_3(){
	HAL_GPIO_WritePin(LED_1_0_GPIO_Port, LED_1_0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_1_GPIO_Port, LED_1_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_2_GPIO_Port, LED_1_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_3_GPIO_Port, LED_1_3_Pin, GPIO_PIN_RESET);
}
void seg1_4(){
	HAL_GPIO_WritePin(LED_1_0_GPIO_Port, LED_1_0_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_1_GPIO_Port, LED_1_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_2_GPIO_Port, LED_1_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_3_GPIO_Port, LED_1_3_Pin, GPIO_PIN_RESET);
}
void seg1_5(){
	HAL_GPIO_WritePin(LED_1_0_GPIO_Port, LED_1_0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_1_GPIO_Port, LED_1_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_2_GPIO_Port, LED_1_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_3_GPIO_Port, LED_1_3_Pin, GPIO_PIN_RESET);
}
void seg1_6(){
	HAL_GPIO_WritePin(LED_1_0_GPIO_Port, LED_1_0_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_1_GPIO_Port, LED_1_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_2_GPIO_Port, LED_1_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_3_GPIO_Port, LED_1_3_Pin, GPIO_PIN_RESET);
}
void seg1_7(){
	HAL_GPIO_WritePin(LED_1_0_GPIO_Port, LED_1_0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_1_GPIO_Port, LED_1_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_2_GPIO_Port, LED_1_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_3_GPIO_Port, LED_1_3_Pin, GPIO_PIN_RESET);
}
void seg1_8(){
	HAL_GPIO_WritePin(LED_1_0_GPIO_Port, LED_1_0_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_1_GPIO_Port, LED_1_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_2_GPIO_Port, LED_1_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_3_GPIO_Port, LED_1_3_Pin, GPIO_PIN_SET);
}
void seg1_9(){
	HAL_GPIO_WritePin(LED_1_0_GPIO_Port, LED_1_0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_1_1_GPIO_Port, LED_1_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_2_GPIO_Port, LED_1_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_1_3_GPIO_Port, LED_1_3_Pin, GPIO_PIN_SET);
}
void seg2_0() {
    HAL_GPIO_WritePin(LED_2_0_GPIO_Port, LED_2_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_1_GPIO_Port, LED_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_2_GPIO_Port, LED_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_3_GPIO_Port, LED_2_3_Pin, GPIO_PIN_RESET);
}

void seg2_1() {
    HAL_GPIO_WritePin(LED_2_0_GPIO_Port, LED_2_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_1_GPIO_Port, LED_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_2_GPIO_Port, LED_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_3_GPIO_Port, LED_2_3_Pin, GPIO_PIN_RESET);
}

void seg2_2() {
    HAL_GPIO_WritePin(LED_2_0_GPIO_Port, LED_2_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_1_GPIO_Port, LED_2_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_2_GPIO_Port, LED_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_3_GPIO_Port, LED_2_3_Pin, GPIO_PIN_RESET);
}

void seg2_3() {
    HAL_GPIO_WritePin(LED_2_0_GPIO_Port, LED_2_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_1_GPIO_Port, LED_2_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_2_GPIO_Port, LED_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_3_GPIO_Port, LED_2_3_Pin, GPIO_PIN_RESET);
}

void seg2_4() {
    HAL_GPIO_WritePin(LED_2_0_GPIO_Port, LED_2_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_1_GPIO_Port, LED_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_2_GPIO_Port, LED_2_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_3_GPIO_Port, LED_2_3_Pin, GPIO_PIN_RESET);
}

void seg2_5() {
    HAL_GPIO_WritePin(LED_2_0_GPIO_Port, LED_2_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_1_GPIO_Port, LED_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_2_GPIO_Port, LED_2_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_3_GPIO_Port, LED_2_3_Pin, GPIO_PIN_RESET);
}

void seg2_6() {
    HAL_GPIO_WritePin(LED_2_0_GPIO_Port, LED_2_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_1_GPIO_Port, LED_2_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_2_GPIO_Port, LED_2_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_3_GPIO_Port, LED_2_3_Pin, GPIO_PIN_RESET);
}

void seg2_7() {
    HAL_GPIO_WritePin(LED_2_0_GPIO_Port, LED_2_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_1_GPIO_Port, LED_2_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_2_GPIO_Port, LED_2_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_3_GPIO_Port, LED_2_3_Pin, GPIO_PIN_RESET);
}

void seg2_8() {
    HAL_GPIO_WritePin(LED_2_0_GPIO_Port, LED_2_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_1_GPIO_Port, LED_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_2_GPIO_Port, LED_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_3_GPIO_Port, LED_2_3_Pin, GPIO_PIN_SET);
}

void seg2_9() {
    HAL_GPIO_WritePin(LED_2_0_GPIO_Port, LED_2_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_2_1_GPIO_Port, LED_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_2_GPIO_Port, LED_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_2_3_GPIO_Port, LED_2_3_Pin, GPIO_PIN_SET);
}
void seg3_0() {
    HAL_GPIO_WritePin(LED_3_0_GPIO_Port, LED_3_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_1_GPIO_Port, LED_3_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_2_GPIO_Port, LED_3_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_3_GPIO_Port, LED_3_3_Pin, GPIO_PIN_RESET);
}

void seg3_1() {
    HAL_GPIO_WritePin(LED_3_0_GPIO_Port, LED_3_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_1_GPIO_Port, LED_3_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_2_GPIO_Port, LED_3_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_3_GPIO_Port, LED_3_3_Pin, GPIO_PIN_RESET);
}

void seg3_2() {
    HAL_GPIO_WritePin(LED_3_0_GPIO_Port, LED_3_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_1_GPIO_Port, LED_3_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_2_GPIO_Port, LED_3_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_3_GPIO_Port, LED_3_3_Pin, GPIO_PIN_RESET);
}

void seg3_3() {
    HAL_GPIO_WritePin(LED_3_0_GPIO_Port, LED_3_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_1_GPIO_Port, LED_3_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_2_GPIO_Port, LED_3_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_3_GPIO_Port, LED_3_3_Pin, GPIO_PIN_RESET);
}

void seg3_4() {
    HAL_GPIO_WritePin(LED_3_0_GPIO_Port, LED_3_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_1_GPIO_Port, LED_3_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_2_GPIO_Port, LED_3_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_3_GPIO_Port, LED_3_3_Pin, GPIO_PIN_RESET);
}

void seg3_5() {
    HAL_GPIO_WritePin(LED_3_0_GPIO_Port, LED_3_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_1_GPIO_Port, LED_3_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_2_GPIO_Port, LED_3_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_3_GPIO_Port, LED_3_3_Pin, GPIO_PIN_RESET);
}

void seg3_6() {
    HAL_GPIO_WritePin(LED_3_0_GPIO_Port, LED_3_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_1_GPIO_Port, LED_3_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_2_GPIO_Port, LED_3_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_3_GPIO_Port, LED_3_3_Pin, GPIO_PIN_RESET);
}

void seg3_7() {
    HAL_GPIO_WritePin(LED_3_0_GPIO_Port, LED_3_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_1_GPIO_Port, LED_3_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_2_GPIO_Port, LED_3_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_3_GPIO_Port, LED_3_3_Pin, GPIO_PIN_RESET);
}

void seg3_8() {
    HAL_GPIO_WritePin(LED_3_0_GPIO_Port, LED_3_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_1_GPIO_Port, LED_3_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_2_GPIO_Port, LED_3_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_3_GPIO_Port, LED_3_3_Pin, GPIO_PIN_SET);
}

void seg3_9() {
    HAL_GPIO_WritePin(LED_3_0_GPIO_Port, LED_3_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_3_1_GPIO_Port, LED_3_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_2_GPIO_Port, LED_3_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_3_3_GPIO_Port, LED_3_3_Pin, GPIO_PIN_SET);
}
void seg4_0() {
    HAL_GPIO_WritePin(LED_4_0_GPIO_Port, LED_4_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_1_GPIO_Port, LED_4_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_2_GPIO_Port, LED_4_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_3_GPIO_Port, LED_4_3_Pin, GPIO_PIN_RESET);
}

void seg4_1() {
    HAL_GPIO_WritePin(LED_4_0_GPIO_Port, LED_4_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_1_GPIO_Port, LED_4_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_2_GPIO_Port, LED_4_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_3_GPIO_Port, LED_4_3_Pin, GPIO_PIN_RESET);
}

void seg4_2() {
    HAL_GPIO_WritePin(LED_4_0_GPIO_Port, LED_4_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_1_GPIO_Port, LED_4_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_2_GPIO_Port, LED_4_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_3_GPIO_Port, LED_4_3_Pin, GPIO_PIN_RESET);
}

void seg4_3() {
    HAL_GPIO_WritePin(LED_4_0_GPIO_Port, LED_4_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_1_GPIO_Port, LED_4_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_2_GPIO_Port, LED_4_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_3_GPIO_Port, LED_4_3_Pin, GPIO_PIN_RESET);
}

void seg4_4() {
    HAL_GPIO_WritePin(LED_4_0_GPIO_Port, LED_4_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_1_GPIO_Port, LED_4_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_2_GPIO_Port, LED_4_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_3_GPIO_Port, LED_4_3_Pin, GPIO_PIN_RESET);
}

void seg4_5() {
    HAL_GPIO_WritePin(LED_4_0_GPIO_Port, LED_4_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_1_GPIO_Port, LED_4_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_2_GPIO_Port, LED_4_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_3_GPIO_Port, LED_4_3_Pin, GPIO_PIN_RESET);
}

void seg4_6() {
    HAL_GPIO_WritePin(LED_4_0_GPIO_Port, LED_4_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_1_GPIO_Port, LED_4_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_2_GPIO_Port, LED_4_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_3_GPIO_Port, LED_4_3_Pin, GPIO_PIN_RESET);
}

void seg4_7() {
    HAL_GPIO_WritePin(LED_4_0_GPIO_Port, LED_4_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_1_GPIO_Port, LED_4_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_2_GPIO_Port, LED_4_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_3_GPIO_Port, LED_4_3_Pin, GPIO_PIN_RESET);
}

void seg4_8() {
    HAL_GPIO_WritePin(LED_4_0_GPIO_Port, LED_4_0_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_1_GPIO_Port, LED_4_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_2_GPIO_Port, LED_4_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_3_GPIO_Port, LED_4_3_Pin, GPIO_PIN_SET);
}

void seg4_9() {
    HAL_GPIO_WritePin(LED_4_0_GPIO_Port, LED_4_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_4_1_GPIO_Port, LED_4_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_2_GPIO_Port, LED_4_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_4_3_GPIO_Port, LED_4_3_Pin, GPIO_PIN_SET);
}



