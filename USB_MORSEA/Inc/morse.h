/*
 * morse.h
 *
 *  Created on: 09.06.2019
 *      Author: sercezar
 */

#ifndef MORSE_H_
#define MORSE_H_

void MainFunction(); //funkcja-petla
void GetChars(uint32_t PressCounter); //odczytuje pojedyncze stukniecia i zapisuje odpowiednie impulsy
void ThrowWord(); //wyrzuca slowo i czysci tablice znakow
void SearchSymbol(); //szukanie symbolu
void DisplaySymbol(char *display); //wyswietla symbole na terminalu

#endif /* MORSE_H_ */
