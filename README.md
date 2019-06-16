# 2019_USBMorse


Morse translator with buzzer and user-button.

-Description:
Main file is concluded in "eklips" folder. 
A program is based on STM32F4 (STM32F411E-DISCO) with buzzer-use, with using virtual com port for translate button impulses to chars from A-Z, numbers 0-9 and special chars: (. , " _ : ; ? ! - + / ( ) = @ and space).
To handle program there`s need to use a terminal program for com port- for example (RealTerm).

Impulses are determined by length of button-press. 
long impulse= 3x short impulse
pause= 3x long impulse

-Pins placement:
PC14- Buzzer
PH0,PH1- Clock
PA0- Button
PD12-PD15 - LEDS
PA11-PA12 - VCP USB

License: 
MIT

Sources:
https://forbot.pl/blog/kurs-stm32-f4-1-czas-poznac-hal-spis-tresci-kursu-id14114


By:
Cezary Szpotek
Adam Waniowski
