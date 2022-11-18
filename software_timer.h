/*
 * software_timer.h
 *
 *  Created on: Nov 10, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define MAX_TIMER 10

typedef struct {
	int counter;
	int flag;
} softwareTimer;


void setTimer(int idx, int duration);

void timerRun();

int isFlagRaised(int idx);

#endif /* INC_SOFTWARE_TIMER_H_ */
