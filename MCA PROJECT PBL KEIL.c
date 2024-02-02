#include <reg51.h>
sbit LDR1 = P1^0;
sbit LDR2 = P1^1;
sbit motorA = P2^0;
sbit motorB = P2^1;
void delay(unsigned int);

void clockwise() 
{
    motorA = 0;
    motorB = 1;
}

void anticlockwise() 
{
    motorA = 1;
    motorB = 0;
	
}

void stop() 
{
    motorA = 0;
    motorB = 0;
}

void main()
{
    LDR1 = 0x0;
    LDR2 = 0x0;

    while(1) 
		{
        if(LDR1 == 1 && LDR2 == 0) 
				{
            clockwise();
        } else if(LDR1 == 0 && LDR2 == 1)
				{
            anticlockwise();
        } else
				{
            stop();
        }

        delay(100);
    }
}

void delay(unsigned int dely) {
          unsigned int loop = 0;
          unsigned int delay_gen = 0;
          for(loop = 0; loop < dely; loop++) {
          for(delay_gen = 0; delay_gen < 1000; delay_gen++) {
            /* delay */
        }
    }
}