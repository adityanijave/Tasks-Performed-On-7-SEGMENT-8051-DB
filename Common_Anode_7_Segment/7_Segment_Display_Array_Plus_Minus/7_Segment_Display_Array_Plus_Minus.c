//including required lib's
#include <REGX51.H>

//sbit decleration
sbit plus = P2^2;
sbit minus = P2^6;

//forward decleration of user defined funcation
void delay(unsigned int);																																//delay funcation with one parameter (proto-type)

//main funcation
void main()
{
	//variables decleration and initi.
	int arr[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};					  //array which contains all hex values from 0 to 9
	int number = 0;																																				//local variable
	
	//forever loop
	while(1)																																							//or we can use for(;;)
	{
		if(plus == 0)																																				//if plus (switch) is active low then,
		{
			if(number < 9)																																		//if number is less then 9
			{
				delay(100);																																			//calling delay funcation with 100
				number++;																																				//increment of 1
			}
			else if (number == 9)																															//else if number is equal to 9
			{
				delay(100);																																			//calling delay funcation with 100
				number = 9;																																			//assign value 9 to number 
			}
		}
		
		else if (minus == 0)																																//else if minus (another switch) is active low then,
		{
			if(number > 0)																																		//if the number is greater than 0 then,
			{
				delay(100);																																			//calling delay funcation with 100
				number--;																																			  //decrement of 1
			}
			else if (number == -1)																														//if number value is equal to -1 then,
			{
				delay(100);																																			//calling delay funcation with 100
				number = 0;																																			//assign value 0 to number
			}	
		}
		
		P1 = arr[number];																																		//the current value of number will call the index value of arr and that value will assign to Port 1 (P1)
	}
}


//funcation defination of user defined funcation
void delay(unsigned int time)																														//delay funcation with one parameter called time
{
	unsigned int i,j;																																			//decleration of variables inside funcation
	for( i = 0; i < time; i++)																														//for loop
	{
		for( j = 0; j < 1000; j++);																													//nested for loop
	}
}