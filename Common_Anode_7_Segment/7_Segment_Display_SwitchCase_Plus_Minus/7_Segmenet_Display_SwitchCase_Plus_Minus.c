
//including required lib's
#include<reg51.h>

//sbit decleration
sbit plus = P1^0;
sbit minus = P1^1;


//forward decleration of user defined funcation
void delay(unsigned int);																							//delay funcation proto-type

//main funcation
void main()
{
	//decleration and initi. of local variables
	int number = 0;																											//number = 0
	
	P2 = 0x00;																													//all pins of port 2 is active low at start
	
	//forever loop
	while(1)																														//or we can use for(;;)
	{
				if (plus == 0)																								//if plus is active low(switch) then,
				{
					if (number < 9)																						  //if number is less than 9
					{
						delay(100);																								//calling delay funcation with 100
						number++;																									//increment of 1
					}
					else if (number == 9)
					{
						delay(100);																								//calling delay funcation with 100
						number = 9;																								//assign value 9 to number
					}
				}

				else if (minus == 0)																					//else if minus (switch) is active low then,
				{
					if (number > 0)																							//if number is greater than 0 then,
					{
						delay(100);																								//calling delay funcation with 100
						number--;																									//decrement by 1
					}
					else if (number == -1)																			//else if number is equal to -1 then,
					{
						delay(100);																								//calling delay funcation with 100
						number = 0;																								//assign value 0 to number
					}
				}
				
		switch (number)																										//then current value of number will pass to case using switch-case statement
		{
			case 0:
				P2 = 0xC0;																								   //0
				delay(4);																								     //calling delay funcation with 4
				break;
			
			case 1:
				P2 = 0xF9;																								   //1
				delay(4);																								     //calling delay funcation with 4
				break;
			
			case 2:
				P2 = 0xA4;																								   //2
				delay(4);																								     //calling delay funcation with 4
				break;
			
			case 3:
				P2 = 0xB0;																								   //3
				delay(4);																								     //calling delay funcation with 4
				break;
				
			case 4:
				P2 = 0x99;																								   //4
				delay(4);																								     //calling delay funcation with 4
				break;
			
			case 5:
				P2 = 0x92;																								   //5
				delay(4);																								     //calling delay funcation with 4
				break;
			
			case 6:
				P2 = 0x82;																								   //6
				delay(4);																								     //calling delay funcation with 4
				break;
			
			case 7:
				P2 = 0xF8;																								   //7
				delay(4);																								     //calling delay funcation with 4
				break;
			
			case 8:
				P2 = 0x80;																								   //8
				delay(4);																								     //calling delay funcation with 4
				break;
			
			case 9:
				P2 = 0x90;																								   //9
				delay(4);																								     //calling delay funcation with 4
				break;
		}
	}
}

//funcation defination of user defined funcation
void delay(unsigned int time)																				//delay funcation with one parameter called time
{
	unsigned int i,j; 																								//decleration of variables inside the funcation
	{
		for(i = 0; i < time; i++)																				//for loop
		{
			for(j = 0; j < 1000; j++);																		//nested for loop
		}
	}
}