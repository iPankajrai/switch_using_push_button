#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
void main()
{
  DDRB=0xff;
  DDRA=0b11111110;
  while(1)
  {
    if(PINA==0b00000001)
	
	  PORTB= 0b00000001;
	
	else
	  PORTB= 0b00000000;
  }
}
