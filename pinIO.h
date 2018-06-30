//pin is set at the constructor using the output macro
//control multiple pins by creating seperate objects

#include "Arduino.h"
#define output(a) pinMode(a, OUTPUT)
#define input(a) pinMode(a, INPUT)
#define high(a) digitalWrite(a, HIGH)
#define low(a) digitalWrite(a, LOW)
#define pwm(a) analogWrite(a, pwm)


class pinIO
{
	public:
		void pinIO(int pin);
		void toggle();//the pin number is set in the constructor this method take not pin value
		void flash(int rate);
		void pulse(int rate, int pwm);//rate = rate of change, pwm = 0 - 255
	
	private:
		int pinNum;
};