/*
 * led_disp.c
 *
 *  Created on: Nov 10, 2022
 *      Author: Admin
 */

#include "led_disp.h"

int leds[NUM_OF_LED] = {RED12_Pin, RED1_Pin, RED2_Pin, RED3_Pin, RED4_Pin, RED5_Pin, RED6_Pin, RED7_Pin, RED8_Pin, RED9_Pin, RED10_Pin, RED11_Pin};

void clear_All_Clock(){
	/*for(int index = 0; index < NUM_OF_LED; index++){
		HAL_GPIO_WritePin(GPIOA, leds[index], SET);
	}*/
	HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
}

void set_Number_on_Clock(int num){
	HAL_GPIO_WritePin(GPIOA, leds[num], RESET);
}

void clear_Number_on_Clock(int num){
	HAL_GPIO_WritePin(GPIOA, leds[num], SET);
}
