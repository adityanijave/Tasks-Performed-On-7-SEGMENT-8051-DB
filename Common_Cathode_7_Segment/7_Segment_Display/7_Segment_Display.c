//including required lib's
#include<reg51.h>


//forward decleration of user defined funcations
void delay(unsigned int);																															//delay funcation with one parameter

//main funcation
void main()
{
	
	P1 = 0x00;
	
	//forever loop
	while(1)              																												      //or we can use for(;;)                    
		{
			P1 = 0x3F;																																			//0x3F = 0
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x06;																																			//0x06 = 1
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x5B;																																			//0x5B = 2
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x4F;																																			//0x4F = 3
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x66;																																			//0x66 = 4
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x6D;																																			//0x6D = 5
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x7D;																																			//0x7D = 6
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x07;																																			//0x07 = 7
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x7F;																																			//0x7F = 8
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x6F;																																			//0x6F = 9
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x77;																																			//0x77 = A
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x7C;																																			//0x7C = B
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x39;																																			//0x39 = C
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x5E;																																			//0x5E = D
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x79;																																			//0x79 = E
			delay(10);																																			//calling delay funcation with 10			
			
			P1 = 0x71;																																			//0x71 = F
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