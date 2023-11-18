//including required lib's
#include <REGX51.H>

//sbit decleration
sbit segment_unit = P3^6;
sbit segment_tens = P3^7;

//forward decleration of user defined funcations
void delay(unsigned int);																																			  //delay funcation proto-type

//main funcation
void main()
{
	//decleration and initi. of local variables
	int segment_data[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
	int count = 0, delayer;
	
	segment_unit = 0;
	segment_tens = 0;
	
	//forever loop
	while(1)																																											//or we can use for(;;)
	{
		for(; count <= 99; count++)																																	//for loop to specify start and end of the count
		{
			for(delayer = 0; delayer < 50; delayer++)																									//for loop to minimize flikering effect
			{
				if(count >= 0 && count <= 99)
				{
					P1 = segment_data[count % 10];																												//(count%10) will work as index for segment_data array and its value will assign to P1
					segment_unit = 1;																																			//seg.unit is on
					segment_tens = 0;																																			//seg.tens is off
					delay(1);																																							//calling delay with 2
					
					P1 = segment_data[count / 10];																												//(count/10) will work as index for segment_data array and its value will assign to P1
					segment_unit = 0;																																			//seg.unit is off
					segment_tens = 1;																																			//seg.tens is on
					delay(1);																																							//calling delay with 2
				}
			}
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
			for(j = 0; j < 300; j++);																		//nested for loop
		}
	}
}