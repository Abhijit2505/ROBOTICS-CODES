#define F_CPU1000000UL;
#include<avr/io.h>
#include<util/delay.h>
int main()
{   char data;
	DDRB=0b00011110;	
	UBRRL=77;	   		//baud rate=9600
	UBRRH=(77>>8);
	UCSRB|=0b00010000; //Enable Reception
	UCSRC|=0b10000110; //set character size				 
while(1)
{             while(RXC==0);	//wait till reception is complete(when RXC==1)
	      data=UDR;		//save the data inside buffer register into a variable
		if(data=='F')
		{PORTB=0b00010010;}
		if(data=='B')
		{PORTB=0b00001100;}
		if(data=='L')
		{PORTB=0b00010000;}
		if(data=='R')
		{PORTB=0b00000010;}
		if(data=='S')
		{PORTB=0b00000000;}	
	}
}
