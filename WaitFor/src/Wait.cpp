#include "Wait.h"
#include <Arduino.h>

void WaitFor(int pin, int forwhat)
{
    if(forwhat == FULL)
    {
        while(digitalRead(pin)!=HIGH) {}
        while(digitalRead(pin)!=LOW) {}
    }
    else if(forwhat == FULLR)
    {
        while(digitalRead(pin)!=LOW) {}
        while(digitalRead(pin)!=HIGH) {}
    }
    else
    {
        while(digitalRead(pin)!=forwhat) {}
    }
}