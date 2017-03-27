#ifndef SRC_CORE_ARTY_H_
#define SRC_CORE_ARTY_H_

#include "xgpio.h"
#include "xparameters.h"
#include "pins.h"

#define OUTPUT 0
#define INPUT  1

#define HIGH 1
#define LOW 0

struct digital_pin{
	XGpio *pGpio;
	uint16_t deviceID;
	unsigned channel;
	unsigned pin;
};

extern const struct digital_pin dPins[];

uint8_t digitalRead(int pin);
void digitalWrite(int pin, int state);

uint8_t pinMode(int pin, int state);

void delay(int millis);

#endif /* SRC_CORE_ARTY_H_ */
