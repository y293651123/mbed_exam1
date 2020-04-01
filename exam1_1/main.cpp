#include "mbed.h"

Serial pc( USBTX, USBRX );

PwmOut PWM1(D6);

AnalogIn Ain(A0);

float i = 0;

int sample = 128;

int j;

float ADCdata[128];

int main()
{

  for (j = 0; j < sample; j++)
  {
    PWM1 = Ain;

    ADCdata[j] = Ain;

    wait(1. / sample);
  }

  for (j = 0; j < sample; j++)
  {
    pc.printf("%1.3f\r\n", ADCdata[j]);
  }


  while(1)
  {
    for(i = 0; i < 1; i = i + 0.1)
    {
        PWM1.period(i);
        PWM1 = Ain;
        wait(0.1);
    }
    for(i = 1; i > 0; i = i + 0.1)
    {
        PWM1.period(i);    
        PWM1 = Ain;
        wait(0.1);
    }
  }
}