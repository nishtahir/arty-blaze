#include "arty.h"

#define _PIN_BTN_0_ {&swGpio,  XPAR_AXI_GPIO_SW_DEVICE_ID,  2, 0}
#define _PIN_BTN_1_ {&swGpio,  XPAR_AXI_GPIO_SW_DEVICE_ID,  2, 1}
#define _PIN_BTN_2_ {&swGpio,  XPAR_AXI_GPIO_SW_DEVICE_ID,  2, 2}
#define _PIN_BTN_3_ {&swGpio,  XPAR_AXI_GPIO_SW_DEVICE_ID,  2, 3}

#define _PIN_SW_0_ {&swGpio,  XPAR_AXI_GPIO_SW_DEVICE_ID,  1, 0}
#define _PIN_SW_1_ {&swGpio,  XPAR_AXI_GPIO_SW_DEVICE_ID,  1, 1}
#define _PIN_SW_2_ {&swGpio,  XPAR_AXI_GPIO_SW_DEVICE_ID,  1, 2}
#define _PIN_SW_3_ {&swGpio,  XPAR_AXI_GPIO_SW_DEVICE_ID,  1, 3}

#define _PIN_LED_0_B_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 0}
#define _PIN_LED_0_G_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 1}
#define _PIN_LED_0_R_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 2}

#define _PIN_LED_1_B_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 3}
#define _PIN_LED_1_G_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 4}
#define _PIN_LED_1_R_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 5}

#define _PIN_LED_2_B_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 6}
#define _PIN_LED_2_G_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 7}
#define _PIN_LED_2_R_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 8}

#define _PIN_LED_3_B_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 9}
#define _PIN_LED_3_G_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 10}
#define _PIN_LED_3_R_ {&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 2, 11}

#define _PIN_LED_4_	{&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 1, 0}
#define _PIN_LED_5_	{&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 1, 1}
#define _PIN_LED_6_	{&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 1, 2}
#define _PIN_LED_7_	{&ledGpio, XPAR_AXI_GPIO_LED_DEVICE_ID, 1, 3}

#define _PIN_SHLD_IO0_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 0}
#define _PIN_SHLD_IO1_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 1}
#define _PIN_SHLD_IO2_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 2}
#define _PIN_SHLD_IO3_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 3}
#define _PIN_SHLD_IO4_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 4}
#define _PIN_SHLD_IO5_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 5}
#define _PIN_SHLD_IO6_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 6}
#define _PIN_SHLD_IO7_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 7}
#define _PIN_SHLD_IO8_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 8}
#define _PIN_SHLD_IO9_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 9}
#define _PIN_SHLD_IO10_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 10}
#define _PIN_SHLD_IO11_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 11}
#define _PIN_SHLD_IO12_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 12}
#define _PIN_SHLD_IO13_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 13}
#define _PIN_SHLD_IO14_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 14}
#define _PIN_SHLD_IO15_	{&shieldGpio, XPAR_AXI_GPIO_0_DEVICE_ID, 1, 15}

XGpio swGpio;
XGpio ledGpio;
XGpio shieldGpio;

const struct digital_pin dPins[] = {
_PIN_BTN_0_,
_PIN_BTN_1_,
_PIN_BTN_2_,
_PIN_BTN_3_,

_PIN_SW_0_,
_PIN_SW_1_,
_PIN_SW_2_,
_PIN_SW_3_,

_PIN_LED_0_R_,
_PIN_LED_0_G_,
_PIN_LED_0_B_,

_PIN_LED_1_R_,
_PIN_LED_1_G_,
_PIN_LED_1_B_,

_PIN_LED_2_R_,
_PIN_LED_2_G_,
_PIN_LED_2_B_,

_PIN_LED_3_R_,
_PIN_LED_3_G_,
_PIN_LED_3_B_,

_PIN_LED_4_,
_PIN_LED_5_,
_PIN_LED_6_,
_PIN_LED_7_,

_PIN_SHLD_IO0_,
_PIN_SHLD_IO1_,
_PIN_SHLD_IO2_,
_PIN_SHLD_IO3_,
_PIN_SHLD_IO4_,
_PIN_SHLD_IO5_,
_PIN_SHLD_IO6_,
_PIN_SHLD_IO7_,
_PIN_SHLD_IO8_,
_PIN_SHLD_IO9_,
_PIN_SHLD_IO10_,
_PIN_SHLD_IO11_,
_PIN_SHLD_IO12_,
_PIN_SHLD_IO13_,
_PIN_SHLD_IO14_,
_PIN_SHLD_IO15_ };

uint8_t pinMode(int pin, int state) {

	uint32_t status;
	uint32_t mask;

	if (!dPins[pin].pGpio->IsReady) {
		status = XGpio_Initialize(dPins[pin].pGpio, dPins[pin].deviceID);
		if (status != XST_SUCCESS) {
			return XST_FAILURE;
		}
	}

	mask = XGpio_GetDataDirection(dPins[pin].pGpio, dPins[pin].channel);

	switch (state) {
	case OUTPUT:
		mask = mask ^ (1 << dPins[pin].pin);
		break;
	case INPUT:
		mask = mask | (1 << dPins[pin].pin);
	default:
		break;
	}

	XGpio_SetDataDirection(dPins[pin].pGpio, dPins[pin].channel, mask);
	return 0;
}

void digitalWrite(int pin, int state) {

	uint32_t mask = 0;
	mask = XGpio_DiscreteRead(dPins[pin].pGpio, dPins[pin].channel);
	switch (state) {
	case LOW:
		mask = mask & (~(1 << dPins[pin].pin));
		break;
	case HIGH:
		mask = mask | (1 << dPins[pin].pin);
	default:
		break;
	}
	XGpio_DiscreteWrite(dPins[pin].pGpio, dPins[pin].channel, mask);

}

uint8_t digitalRead(int pin) {

	uint32_t data;
	data = XGpio_DiscreteRead(dPins[pin].pGpio, dPins[pin].channel)
			& 1 << dPins[pin].pin;
	if (data)
		return 1;
	else
		return 0;
}

void delay(int millis) {
	MB_Sleep(millis);
}

