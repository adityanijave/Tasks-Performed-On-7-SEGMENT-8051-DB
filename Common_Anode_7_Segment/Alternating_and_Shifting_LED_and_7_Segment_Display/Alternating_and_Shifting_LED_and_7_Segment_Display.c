#include<reg51.h>


void alternating_LED();
void shifting_LED_right_2_left();
void shifting_LED_left_2_right();
void seven_Segment_Display();


sbit sw1 = P1^0;
sbit sw2 = P1^2;
sbit sw3 = P1^4;
sbit sw4 = P1^6;


void main()
{
	P2 = 0x00;
	P3 = 0xFF;
	while(1) 
	{
		if (sw1 == 0)
		{
			alternating_LED();
			P2 = 0x00;
		}
		else if (sw2 == 0)
		{
			shifting_LED_right_2_left();
			P2 = 0x00;
		}
		else if (sw3 == 0)
		{
			shifting_LED_left_2_right();
			P2 = 0x00;
		}
		else if (sw4 == 0)
		{
			seven_Segment_Display();
			P3 = 0xFF;
		}
		else
		{
			P2 = 0x00;
			P3 = 0xFF;
		}
	}
}

void alternating_LED()
{
	unsigned int i;
	
	P2 = 0x55;
	for(i = 0; i<= 40000;i++);
			
	P2 = 0xAA;
	for(i = 0; i<= 40000;i++);
}

void shifting_LED_right_2_left()
{
	unsigned int i;
	
	P2 = 0x01;
	for(i = 0; i<= 40000;i++);
		
	P2 = 0x02;
	for(i = 0; i<= 40000;i++);
		
	P2 = 0x04;
	for(i = 0; i<= 40000;i++);
		
	P2 = 0x08;
	for(i = 0; i<= 40000;i++);
		
	P2 = 0x10;
	for(i = 0; i<= 40000;i++);
		
	P2 = 0x20;
	for(i = 0; i<= 40000;i++);
		
	P2 = 0x40;
	for(i = 0; i<= 40000;i++);
		
	P2 = 0x80;
	for(i = 0; i<= 40000;i++);
}
	
void shifting_LED_left_2_right()
{
	unsigned int i;
		
	P2 = 0x80;
	for(i = 0; i<= 40000;i++);
	
	P2 = 0x40;
	for(i = 0; i<= 40000;i++);
	
	P2 = 0x20;
	for(i = 0; i<= 40000;i++);
	
	P2 = 0x10;
	for(i = 0; i<= 40000;i++);
	
	P2 = 0x08;
	for(i = 0; i<= 40000;i++);
	
	P2 = 0x04;
	for(i = 0; i<= 40000;i++);
	
	P2 = 0x02;
	for(i = 0; i<= 40000;i++);
	
	P2 = 0x01;
	for(i = 0; i<= 40000;i++);
}


void seven_Segment_Display()
{
		unsigned int i;
		P3 = 0xC0;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0xF9;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0xA4;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0xB0;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x99;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x92;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x82;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0xF8;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x80;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x90;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x88;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x83;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0xC6;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0xA1;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x86;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x8E;
		for(i = 0; i<= 40000;i++);
}