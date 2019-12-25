#include "LPC407x_8x_177x_8x.h"

#include <stdio.h> 
#include <string.h> 

#include "Library/Serial.h"
#include "Library/HM10.h"
#include "Library/GPIO.h"
#include "Library/PWM.h"
#include "Library/Joystick.h" 
#include "Library/LED.h"

//Define IOCON registers of GPIO pins
#define IOCON_GPIO1		*((volatile uint32_t*)(0x4002C0DC))  //P6
#define IOCON_GPIO2		*((volatile uint32_t*)(0x4002C0D0))   //p7

char characters[128] = ""; 

void init() {	
	IOCON_GPIO1 &= ~(7);
	IOCON_GPIO2 &= ~(7);
	PORT1->DIR |= (1<<23 | 1<<20);
	PORT1->PIN &= ~(1<<20);
	Joystick_Init();
	PWM_Init();
	LED_Init();
	LED_ON();
	/*
	Serial_Init();

	HM10_Init();
	*/
}

void update() {
	/* serialTransmitData= "Hello World";
	Serial_WriteData(*serialTransmitData++);
  while(!serialTransmitCompleted); */
	
	
	
}

int main() {
	init();
	
	while(1) {
		update();
	}
}

