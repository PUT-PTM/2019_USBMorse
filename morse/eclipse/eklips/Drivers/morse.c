/*
 * morse.c
 *
 *  Created on: 09.06.2019
 *      Author: sercezar
 */

#include "main.h"
#include "morse.h"

uint8_t DataToSend[40];
uint8_t MessageCounter = 0;
uint8_t MessageLength = 0;

void MainFunction(){
	/*
	 if (HAL_GPIO_ReadPin(Button_GPIO_Port, Button_Pin) == GPIO_PIN_SET) {
		  			HAL_Delay(100);
		  			if (HAL_GPIO_ReadPin(Button_GPIO_Port, Button_Pin) == GPIO_PIN_SET) {
		  				++MessageCounter;
		  				MessageLength = sprintf(DataToSend, "Wiadomosc nr %d\n\r", MessageCounter);
		  				CDC_Transmit_FS(DataToSend, MessageLength);
		  			}
		  		}
	 */
}


