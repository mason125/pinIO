#include "Arduino.h"
#include "pinIO.h"

//constructor 
pinIO::pinIO(pin)
{
	input(pin);
	pinNum = pin;
}

//this method turns the pin on and off at the rate value
void test::flash(rate)
{
	high(pinNum);
	delay(rate);
	low(pinNum);
	delay(rate);
}