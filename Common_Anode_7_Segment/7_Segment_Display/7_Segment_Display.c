//including required lib's
#include<reg51.h>


//forward decleration of user defined funcations
void delay(unsigned int);																															//delay funcation with one parameter

//main funcation
void main()
{
	
	P2 = 0x00;
	
	//forever loop
	while(1)              																												      //or we can use for(;;)                    
		{
			P2 = 0xC0;																																			//0
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0xF9;																																			//1
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0xA4;																																			//2
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0xB0;																																			//3
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0x99;																																			//4
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0x92;																																			//5
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0x82;																																			//6
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0xF8;																																			//7
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0x80;																																			//8
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0x90;																																			//9
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0x88;																																			//A
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0x83;																																			//B
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0xC6;																																			//C
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0xA1;																																			//D
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0x86;																																			//E
			delay(10);																																			//calling delay funcation with 10			
			
			P2 = 0x8E;																																			//F
			delay(10);																																			//calling delay funcation with 10			
	}
}

//funcation defination of user defined funcation
void delay(unsigned int time)																													//delay funcation with one parameter called time
{
	unsigned int i,j;																																		//decleration of variable inside of funcation
	for(i = 0; i <= time; i++)																													//for loop
	{
		for(j = 0; j <= 10000; j++);																											//nested for loop
	}	
}