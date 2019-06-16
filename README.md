# 2019_MorseButton
## Overview
Morse translator with buzzer and user-button.

## Description
Main file is concluded in "USB_MORSEA" folder. A program is based on STM32F4 (STM32F411E-DISCO) with buzzer-use, with using virtual com port for translate button impulses to chars from A-Z, numbers 0-9 and special chars: (. , " _ : ; ? ! - + / ( ) = @ and space). To handle program there`s need to use a terminal program for com port-for example (RealTerm).

Impulses are determined by length of button-press. Long impulse = 3x Short impulse, pause = 3x long impulse

Pins placement: PC14-Buzzer, PH0 and PH1-Clock, PA0-Button, PD12-PD15 - LEDS, PA11-PA12 - VCP USB

Future development opportunities:
Communication in the other direction (from computer to STM32)
Addition of an external button
Addition of an external screen

## Tools
(STM32F411E-DISCO), C language, Buzzer with active generator

## How to run
Connect everything, run software for VPC terminal on the computer, use the button according to the morse code alphabet

## How to compile
Clone, compile project to STM32F4 Discovery.
Connect all pins correctly: PC14-Buzzer PH0,PH1-Clock, PA0-Button, PD12-D15 -LEDS 

## Attributions
Course for beginners:
https://forbot.pl/blog/kurs-stm32-f4-11-komunikacja-przez-usb-id13477
Virtual Port Com:
https://github.com/xenovacivus/STM32DiscoveryVCP

## License
licence: MIT

## Credits
Cezary Szpotek
Adam Waniowski

The project was conducted during the Microprocessor Lab course held by the Institute of Control and Information Engineering, Poznan University of Technology. Supervisor: Tomasz Mankowski
