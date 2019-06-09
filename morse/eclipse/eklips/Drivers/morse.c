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

// htim
TIM_HandleTypeDef htim3;
TIM_HandleTypeDef htim4;

// Zmienne morsowe
uint8_t stop = 0;
uint16_t val = 0;
char *results; // zapisujemy w tym morsowe litery
char *word;


// Wysy³anie
char dataToSend[40];    // array for date to send
char messageLength = 0; //  length of message

// Odbieranie
char receivedData[2048];        // ara
uint8_t receivedDataFlag = 0;   // Flaga informujaca o odebraniu danych
char temp[40];                  // temporary for sending morse
const char *letter = "* ETIANMSURWDKGOHVF?L?PJBXCYZQ??";    // zeby tlumaczyc morsa

// Kolejne zmienne morsowe
char *morses = "";
uint8_t x = 0x00;
uint8_t y = 0x00;
int b = 0;
int reset = 0;  // reset ekranu, jesli wyswietla sie wynik
int space = 0;  // czy poprzednim znakiem byla spacja

void MainFunction(){
	 if (HAL_GPIO_ReadPin(Button_GPIO_Port, Button_Pin) == GPIO_PIN_SET) {
		  			HAL_Delay(100);
		  			if (HAL_GPIO_ReadPin(Button_GPIO_Port, Button_Pin) == GPIO_PIN_SET) {
		  				++MessageCounter;
		  				MessageLength = sprintf(DataToSend, "Wiadomosc nr %d\n\r", MessageCounter);
		  				CDC_Transmit_FS(DataToSend, MessageLength);
		  			}
		  		}
}
