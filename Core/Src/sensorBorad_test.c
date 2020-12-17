/*
 * sensorBorad_test.c
 *
 *  Created on: Dec 17, 2020
 *      Author: arthurmille
 */

#include "sensorBoard_test.h"

void SEND_DATA_UART(uint8_t* buf,uint16_t len){
	HAL_UART_Transmit(&huart2,buf, len, HAL_MAX_DELAY);
}


void PRINT_DEBUG(char* str){
	SEND_DATA_UART((uint8_t*)str,strlen(str));
	SEND_DATA_UART((uint8_t*)"\n\r",strlen("\n\r"));
}


void sendSensorData(void){
	char msg[100] = {0};

	uint32_t val = rand();
	val = val%100;
	//val = val>99?50:val;

	/*FAKE DATA*/
	sprintf(msg,"|TEMP1=%02d|ON=TRUE|",val);

	/*TRANSMISSION*/
	SEND_DATA_UART(msg,strlen(msg));

	PRINT_DEBUG("");
}

void LIB_INIT(void){

   srand((unsigned) time(&t));

}


