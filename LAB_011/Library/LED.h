#ifndef LED_H
#define LED_H

#include "LPC407x_8x_177x_8x.h"
#include "GPIO.h"

#define LED1_PORT			PORT0
#define LED1_MASK			((uint32_t) 1 << 0)

#define LED2_PORT			PORT0
#define LED2_MASK			((uint32_t) 1 << 1)

#define LED3_PORT			PORT0
#define LED3_MASK			((uint32_t) 1 << 4)

#define LED4_PORT			PORT0
#define LED4_MASK			((uint32_t) 1 << 5)

void LED_Init(void);
void LED1_Init(void);
void LED2_Init(void);
void LED3_Init(void);
void LED4_Init(void);

void LED_ON(void);
void LED1_On(void);
void LED2_On(void);
void LED3_On(void);
void LED4_On(void);

void LED_OFF(void);
void LED1_Off(void);
void LED2_Off(void);
void LED3_Off(void);
void LED4_Off(void);

#endif
