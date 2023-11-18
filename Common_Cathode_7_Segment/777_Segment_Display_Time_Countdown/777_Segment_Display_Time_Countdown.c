#include <REGX51.H>

sbit start = P3^0;
sbit reset = P3^1;

sbit unit_segmenet = P3^2;
sbit tens_segmenet = P3^3;
sbit hundred_segmenet = P3^4;

void delay(int);
void main()
{
	
	unsigned int Segment_data[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F}, sec_count, min_count, delayer;
	
	P1 = 0x00;
	while(1)
	{
		if(start == 0 && reset == 1)
		{
			for(min_count = 2; min_count < -1; min_count--)
			{
				if(min_count == 2)
				{
					for(delayer = 0; delayer < 50; delayer++)
						{
							P1 = Segment_data[min_count];
							unit_segmenet = 0;
							tens_segmenet = 0;
							hundred_segmenet = 1;
							delay(1);
							
							P1 = Segment_data[0];
							unit_segmenet = 1;
							tens_segmenet = 0;
							hundred_segmenet = 0;
							
							delay(1);
							
							P1 = Segment_data[0];
							unit_segmenet = 0;
							tens_segmenet = 1;
							hundred_segmenet = 0;
							delay(1);
						}
				}
				else if (min_count < 2)
				{
					for(sec_count = 59; sec_count < 61 && sec_count < -1; sec_count--)
				{
					for(delayer = 0; delayer < 25; delayer++)
						{
							P1 = Segment_data[min_count];
							unit_segmenet = 0;
							tens_segmenet = 0;
							hundred_segmenet =1;
							delay(1);
							
							P1 = Segment_data[sec_count % 10];
							unit_segmenet = 1;
							tens_segmenet = 0;
							hundred_segmenet = 0;
							
							delay(1);
							
							P1 = Segment_data[sec_count / 10];
							unit_segmenet = 0;
							tens_segmenet = 1;
							hundred_segmenet = 0;
							delay(1);
						}
						delay(5);
					}
				}
			}
		}
		
		else if (reset == 0)
		{
							for(;start == 1;)
			{
				P1 = Segment_data[2];
							unit_segmenet = 0;
							tens_segmenet = 0;
							hundred_segmenet = 1;
							delay(1);
							
							P1 = Segment_data[0];
							unit_segmenet = 1;
							tens_segmenet = 0;
							hundred_segmenet = 0;
							
							delay(1);
							
							P1 = Segment_data[0];
							unit_segmenet = 0;
							tens_segmenet = 1;
							hundred_segmenet = 0;
							delay(1);
			}	
		}
	}
}

void delay(int time)
{
	int i,j;
	for(i = 0; i < time; i++)
	{
		for(j = 0; j < 1000; j++);
	}
}