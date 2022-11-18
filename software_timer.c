/*
 * software_timer.c
 *
 *  Created on: Nov 10, 2022
 *      Author: Admin
 */

#include "software_timer.h"

softwareTimer Timer_array[MAX_TIMER];
static int current_timer = 0;

void setTimer(int idx, int duration){
	Timer_array[idx-1].counter = duration;
	Timer_array[idx-1].flag = 0;

	current_timer+=1; // keep track of array elements
}


void timerRun(){
	for (int i=0; i<current_timer; i++){
		if (Timer_array[i].counter > 0){
			Timer_array[i].counter--;
			if (Timer_array[i].counter <= 0) Timer_array[i].flag = 1;
		}
	}
}

int isFlagRaised (int idx){
	if (Timer_array[idx].flag == 1) return 1;
	else return 0;
}

