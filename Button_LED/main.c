#include <reg51.h>
#include "main.h"
#include "delay.h"

sbit k1 = P1^7;

//7段共阳数码管显示码
//不显示小数点
unsigned char DIS_CODE_1[ ]={
0xC0, //"0"
0xF9, //"1"
0xA4, //"2"
0xB0, //"3"
0x99, //"4"
0x92, //"5"
0x82, //"6"
0xF8, //"7"
0x80, //"8"
0x90, //"9"
0x88, //"A"
0x83, //"B"
0xC6, //"C"
0xA1, //"D"
0x86, //"E"
0x8E, //"F"
0x89, //"H"
0xC7, //"L"
0xC8, //"n"
0xC1, //"u"
0x8C, //"P"
0xA3, //"o"
0xBF, //"-"
0xFF, //
0xFF //
};



//7段共阴数码管显示码
//不显示小数点
unsigned char DIS_CODE_0[ ]={
0x3F, //"0"
0x06, //"1"
0x5B, //"2"
0x4F, //"3"
0x66, //"4"
0x6D, //"5"
0x7D, //"6"
0x07, //"7"
0x7F, //"8"
0x6F, //"9"
0x77, //"A"
0x7C, //"B"
0x39, //"C"
0x5E, //"D"
0x79, //"E"
0x71, //"F"
0x76, //"H"
0x38, //"L"
0x37, //"n"
0x3E, //"u"
0x73, //"P"
0x5C, //"o"
0x40, //"-"
0x00, // 
0x00 //
};



void main()
{
	
	uchar i = 0;
	int num = 0;
	
	
	while(1)
	{
		if(num==0)
		P3 = DIS_CODE_1[num];
		
		k1 = 1;
		
		while(k1 != 0);
		while(k1 == 0);
		while(k1 != 0);
		
		num++;
		P3 = DIS_CODE_1[num];
		
		if(num==16)
		num = 0;

		
	}
	
}








