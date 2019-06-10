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
const char *c="_._.";
const char *d="_..";
const char *e=".";
const char *f=".._.";
const char *g="__.";
const char *h="....";
const char *i="..";
const char *j=".___";
const char *k="_._";
const char *l="._..";
const char *m="__";
const char *n="_.";
const char *o="___";
const char *p=".__.";
const char *q="__._";
const char *r="._.";
const char *s="...";
const char *t="_";
const char *u=".._";
const char *v="..._";
const char *w=".__";
const char *x="_.._";
const char *y="_.__";
const char *z="__..";


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
	else if(strcmp (CharArray, c) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "C");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, d) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "D");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, e) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "E");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, f) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "F");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, g) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "G");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, h) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "H");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, i) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "I");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, j) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "J");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, k) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "K");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, l) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "L");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, m) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "M");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, n) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "N");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, o) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "O");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, p) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "P");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, q) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "Q");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, r) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "R");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, s) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "S");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, t) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "T");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, u) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "U");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, v) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "V");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, w) == 0){
			++MessageCounter;
			MessageLength = sprintf(DataToSend, "W");
			CDC_Transmit_FS(DataToSend, MessageLength);
		}
	else if(strcmp (CharArray, x) == 0){
				++MessageCounter;
				MessageLength = sprintf(DataToSend, "X");
				CDC_Transmit_FS(DataToSend, MessageLength);
			}
	else if(strcmp (CharArray, y) == 0){
				++MessageCounter;
				MessageLength = sprintf(DataToSend, "Y");
				CDC_Transmit_FS(DataToSend, MessageLength);
			}
	else if(strcmp (CharArray, z) == 0){
				++MessageCounter;
				MessageLength = sprintf(DataToSend, "Z");
				CDC_Transmit_FS(DataToSend, MessageLength);
			}
}
