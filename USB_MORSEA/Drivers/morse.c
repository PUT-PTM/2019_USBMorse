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

uint8_t DataToSend[99];
uint8_t MessageLength = 0;
char CharArray[90]="";

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

const char *one=".____";
const char *two="..___";
const char *three="...__";
const char *four="...._";
const char *five=".....";
const char *six="_.....";
const char *seven="__...";
const char *eight="___..";
const char *nine="____.";
const char *zero="_____";

const char *dot="._._._";
const char *comma="__..__";
const char *apo=".____.";
const char *quo="._.._.";
const char *underscr="..__._";
const char *colon="___...";
const char *semicolon="_._._.";
const char *questmark="..__..";
const char *exclammark="_._.__";
const char *dash="_...._";
const char *plus="._._.";
const char *slash="_.._.";
const char *openbr="_.__.";
const char *closebr="_.__._";
const char *equal="_..._";
const char *at=".__._.";
const char *space="._.._";

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
	memset( CharArray, '\0', sizeof(char)*90);
}

void SearchSymbol(){
	if (strcmp (CharArray, a) == 0) {
				DisplaySymbol("A");
	}
	else if(strcmp (CharArray, b) == 0){
				DisplaySymbol("B");
	}
	else if(strcmp (CharArray, c) == 0){
				DisplaySymbol("C");
		}
	else if(strcmp (CharArray, d) == 0){
				DisplaySymbol("D");
		}
	else if(strcmp (CharArray, e) == 0){
				DisplaySymbol("E");
		}
	else if(strcmp (CharArray, f) == 0){
				DisplaySymbol("F");
		}
	else if(strcmp (CharArray, g) == 0){
				DisplaySymbol("G");
		}
	else if(strcmp (CharArray, h) == 0){
				DisplaySymbol("H");
		}
	else if(strcmp (CharArray, i) == 0){
				DisplaySymbol("I");
		}
	else if(strcmp (CharArray, j) == 0){
				DisplaySymbol("J");
		}
	else if(strcmp (CharArray, k) == 0){
				DisplaySymbol("K");
		}
	else if(strcmp (CharArray, l) == 0){
				DisplaySymbol("L");
		}
	else if(strcmp (CharArray, m) == 0){
				DisplaySymbol("M");
		}
	else if(strcmp (CharArray, n) == 0){
				DisplaySymbol("N");
		}
	else if(strcmp (CharArray, o) == 0){
				DisplaySymbol("O");
		}
	else if(strcmp (CharArray, p) == 0){
				DisplaySymbol("P");
		}
	else if(strcmp (CharArray, q) == 0){
				DisplaySymbol("Q");
		}
	else if(strcmp (CharArray, r) == 0){
				DisplaySymbol("R");
		}
	else if(strcmp (CharArray, s) == 0){
				DisplaySymbol("S");
		}
	else if(strcmp (CharArray, t) == 0){
				DisplaySymbol("T");
		}
	else if(strcmp (CharArray, u) == 0){
				DisplaySymbol("U");
		}
	else if(strcmp (CharArray, v) == 0){
				DisplaySymbol("V");
		}
	else if(strcmp (CharArray, w) == 0){
				DisplaySymbol("W");
		}
	else if(strcmp (CharArray, x) == 0){
				DisplaySymbol("X");
			}
	else if(strcmp (CharArray, y) == 0){
				DisplaySymbol("Y");
			}
	else if(strcmp (CharArray, z) == 0){
				DisplaySymbol("Z");
			}
	//////////////////////////////////////////////
	else if(strcmp (CharArray, one) == 0){
					DisplaySymbol("1");
		}
	else if(strcmp (CharArray, two) == 0){
					DisplaySymbol("2");
		}
	else if(strcmp (CharArray, three) == 0){
					DisplaySymbol("3");
		}
	else if(strcmp (CharArray, four) == 0){
					DisplaySymbol("4");
		}
	else if(strcmp (CharArray, five) == 0){
					DisplaySymbol("5");
		}
	else if(strcmp (CharArray, six) == 0){
					DisplaySymbol("6");
		}
	else if(strcmp (CharArray, seven) == 0){
					DisplaySymbol("7");
		}
	else if(strcmp (CharArray, eight) == 0){
					DisplaySymbol("8");
		}
	else if(strcmp (CharArray, nine) == 0){
					DisplaySymbol("9");
		}
	else if(strcmp (CharArray, zero) == 0){
					DisplaySymbol("0");
		}
	///////////////////////////////////////////
	else if(strcmp (CharArray, dot) == 0){
					DisplaySymbol(".");
		}
	else if(strcmp (CharArray, comma) == 0){
					DisplaySymbol(",");
		}
	else if(strcmp (CharArray, apo) == 0){
					DisplaySymbol("'");
		}
	else if(strcmp (CharArray, quo) == 0){
					DisplaySymbol("\"");
		}
	else if(strcmp (CharArray, underscr) == 0){
					DisplaySymbol("_");
		}
	else if(strcmp (CharArray, colon) == 0){
					DisplaySymbol(":");
		}
	else if(strcmp (CharArray, semicolon) == 0){
					DisplaySymbol(";");
		}
	else if(strcmp (CharArray, questmark) == 0){
					DisplaySymbol("?");
		}
	else if(strcmp (CharArray, exclammark) == 0){
					DisplaySymbol("!");
		}
	else if(strcmp (CharArray, dash) == 0){
					DisplaySymbol("-");
		}
	else if(strcmp (CharArray, plus) == 0){
					DisplaySymbol("+");
		}
	else if(strcmp (CharArray, slash) == 0){
					DisplaySymbol("/");
		}
	else if(strcmp (CharArray, openbr) == 0){
					DisplaySymbol("(");
		}
	else if(strcmp (CharArray, closebr) == 0){
					DisplaySymbol(")");
		}
	else if(strcmp (CharArray, equal) == 0){
					DisplaySymbol("=");
		}
	else if(strcmp (CharArray, at) == 0){
					DisplaySymbol("@");
		}
	else if(strcmp (CharArray, space) == 0){
					DisplaySymbol(" ");
		}
}

void DisplaySymbol(char *display){
	MessageLength = sprintf(DataToSend, display);
	CDC_Transmit_FS(DataToSend, MessageLength);
}
