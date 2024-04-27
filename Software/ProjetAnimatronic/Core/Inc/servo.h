/*
 * servo.h
 *
 *  Created on: Apr 12, 2024
 *      Author: administrateur
 */

#ifndef INC_SERVO_H_
#define INC_SERVO_H_

#define AUTORELOAD 1000

void getCCRvalue(int dutyCycle); //calcule la valeur à écrire dans le CCR en fonction du duty cycle souhaité
void open_close(int servoNumber); //ouvre/ferme les yeux/le bec
void turnHead(int servoNumber);

#endif /* INC_SERVO_H_ */
