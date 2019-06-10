/*
 * morse.c
 *
 *  Created on: 09.06.2019
 *      Author: sercezar
 */

#include "main.h"
#include "morse.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>





uint8_t DataToSend[40];
uint8_t MessageCounter = 0;
uint8_t MessageLength = 0;
//char CharArray[20]="";
char CharArray[20]="";

const char *a="._";
const char *b="_...";


void MainFunction(){

}

void GetChars(uint32_t PressCounter){
		if(PressCounter<=6){
			strcat(CharArray,".");
		}
		else{
			strcat(CharArray,"_");
		}
}

void ThrowWord(){
	SearchSymbol();
	//memset( CharArray, '\0', sizeof(char)*20);
	strcpy(CharArray,"");
}

void SearchSymbol(){
	if (strcmp (CharArray, a) == 0) {
		++MessageCounter;
		MessageLength = sprintf(DataToSend, "A");
		CDC_Transmit_FS(DataToSend, MessageLength);
	}
	else if(strcmp (CharArray, b) == 0){
		++MessageCounter;
		MessageLength = sprintf(DataToSend, "B");
		CDC_Transmit_FS(DataToSend, MessageLength);
	}
}
