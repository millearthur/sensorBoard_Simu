/*
 * sensorBoard_test.h
 *
 *  Created on: Dec 17, 2020
 *      Author: arthurmille
 */

#ifndef INC_SENSORBOARD_TEST_H_
#define INC_SENSORBOARD_TEST_H_

#include "stm32f1xx_hal.h"

#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <time.h>

extern UART_HandleTypeDef huart2;
time_t t;

void SEND_DATA_UART(uint8_t* buf,uint16_t len);
void PRINT_DEBUG(char* str);

void LIB_INIT(void);


void sendSensorData(void);

#endif /* INC_SENSORBOARD_TEST_H_ */
