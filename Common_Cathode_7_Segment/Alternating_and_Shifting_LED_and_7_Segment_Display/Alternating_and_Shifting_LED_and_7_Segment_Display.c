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
	P3 = 0x00;
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
			P3 = 0x00;
		}
		else
		{
			P2 = 0x00;
			P3 = 0x00;
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
		P3 = 0x3F;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x06;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x5B;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x4F;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x66;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x6D;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x7D;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x07;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x7F;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x6F;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x77;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x7C;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x39;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x5E;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x7F;
		for(i = 0; i<= 40000;i++);
		
		P3 = 0x71;
		for(i = 0; i<= 40000;i++);
}