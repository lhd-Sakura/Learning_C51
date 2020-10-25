#include <reg51.h>
#include "main.h"
#include "delay.h"

uchar code DIS_CODE[ ]={0xc0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

void main()
{
	uchar i=0;
	while(1)
	{
		for(i=0;i<8;i++)
		{
			P2=(1<<i);
			P0=DIS_CODE[i];
//			delay_ms(10);
		
		}
	}

}








