#include "AT89X52.h"
unsigned char code seg_code[]={0xc0,0xf9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
unsigned char code cow_code[]={0xfe,0xfd,0xfb,0xfc,0xef,0xdf,0xbf,0x7f,0xfe};
struct clock
{
	unsigned char sec,min,hour;
};
struct date
{
	unsigned int year;
	unsigned char month,day,week;
	struct clock Time;

};
struct date nowdate;
void delayms(unsigned int delay)
{
	unsigned int i;
	for(;delay>0;delay--)
	{
		for(i=0;i<124;i++)
		{;}
	
	}

}

void main()
{
//	unsigned char i;
	nowdate.year = 2019;
	nowdate.month=4
	nowdate.day=15
	nowdate.week=1
	nowdate.time.hour=8
	nowdate.time.min=30
	nowdate.time.sec=56;
	for(;;)
	{
		P0=seg_code[nowdate.year/1000];
		P2=cow_code[0];
		delayms();                //yan shi han shu
		P0=0xff;
		P2=0xff;
		P0=seg_code[nowdate.year%1000/100];
		P2=cow_code[1];
		delayms();                //yan shi han shu
		P0=0xff;
		P2=0xff;
		P0=seg_code[nowdate.year%100/10];
		P2=cow_code[2];
		delayms();                //yan shi han shu
		P0=0xff;
		P2=0xff;
		P0=seg_code[nowdate.year%10];
		P2=cow_code[3];
		delayms();                //yan shi han shu
		P0=0xff;
		P2=0xff;
		
		P0=seg_code[nowdate.moth/10];
		P2=cow_code[4];
		delayms();                //yan shi han shu
		P0=0xff;
		P2=0xff;
		P0=seg_code[nowdate.moth%10];
		P2=cow_code[5];
		delayms();                //yan shi han shu
		P0=0xff;
		P2=0xff;
		
		P0=seg_code[nowdate.day/10];
		P2=cow_code[6];
		delayms();                //yan shi han shu
		P0=0xff;
		P2=0xff;
		P0=seg_code[nowdate.moth%10];
		P2=cow_code[7];
		delayms();                //yan shi han shu
		P0=0xff;
		P2=0xff;
		
		P0=seg_code[nowdate.week%10];
		P3=cow_code[8];
		delayms();                //yan shi han shu
		P0=0xff;
		P2=0xff;
  }	
	
}
