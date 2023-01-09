/*
 * Motor_Private.h
 *
 * Created: 26/3/2022 10:41:19 PM
 *  Author: youssef samy 
 */ 


#ifndef MOTOR_PRIVATE_H_
#define MOTOR_PRIVATE_H_

#include "Motor_Configuration.h"

void Motor_Initialize(void);
void Motor_ON(motor_direction direction, motor_enable enable_pin);
void Motor_OFF(motor_enable enable_pin);




#endif /* MOTOR_PRIVATE_H_ */