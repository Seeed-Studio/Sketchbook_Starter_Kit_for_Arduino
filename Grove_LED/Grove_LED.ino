// demo of Grove - Starter V2.0
// Loovee  2013-3-10
// as the topic, we will use Grove - Led to make a breath light
// Grove - LED connect to D3 digital pin 3 of the arduino board
// the following pin which support PWM(pulse width modulation) can be used:
// 3, 5, 6, 9, 10, 11

const int pinLed    = 3;                        // pin of led define here

void setup()
{
    pinMode(pinLed, OUTPUT);                    // set led OUTPUT
}

void loop()
{
    
    for(int i=0; i<=255; i++)
    {
        analogWrite(pinLed, i);
        delay(5);                               // change delay time can breath faster or slower
    }
    delay(100);
    
    for(int i=254; i>=0; i--)
    {
        analogWrite(pinLed, i);
        delay(5);                               // change delay time can breath faster or slower
    }
    delay(500);
}
