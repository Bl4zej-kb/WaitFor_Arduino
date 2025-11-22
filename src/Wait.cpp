#include "Wait.h"
#include <Arduino.h>

void WaitFor(int pin, int forwhat)
{
    if(forwhat == FULL)
    {
        while(digitalRead(pin)!=HIGH) {}
        while(digitalRead(pin)!=LOW) {}
    }
    else
    {
        while(digitalRead(pin)!=forwhat) {}
    }
}