#include<avr/io.h>
#define F_CPU16000000UL
#include<util/delay.h>
void main()
{ 
  DDRB=0xff;
  DDRA=0b11111110;
  
  int count=2;
  while(1)   //using pull down resistor  // for pull up use PORTA=0x01; and then in if condition use PINA= 0x00
  { 
    if(PINA==0x01)
	{_delay_ms(1);
      if(count%2==0)
	  { if(PINA==0x00)
	    {
		PORTB=0x01;
		count++;
		}
      }
	  else
	  { 
	    if(PINA==0X00)
	    {
	      PORTB=0x00;
		   count--;
		 }
       }
     }     
  }
}
