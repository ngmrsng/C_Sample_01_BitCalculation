#include <stdio.h>

/* 8byte / 32bit bit flags */
static const unsigned int BIT_FLAG_0 	= 0x00000000;
static const unsigned int BIT_FLAG_1 	= 0x00000001;
static const unsigned int BIT_FLAG_2 	= 0x00000010;
static const unsigned int BIT_FLAG_4 	= 0x00000100;
static const unsigned int BIT_FLAG_8 	= 0x00001000;
static const unsigned int BIT_FLAG_16	= 0x00010000;
static const unsigned int BIT_FLAG_32	= 0x00100000;
static const unsigned int BIT_FLAG_64	= 0x01000000;
static const unsigned int BIT_FLAG_128  = 0x10000000;

/* definition */
void bit_extractor( unsigned int value )
{
	if( ( value & BIT_FLAG_1 ) != BIT_FLAG_0 )
	{
		printf("%#010x AND BIT_FLAG_1  = %#010x\n", value, value & BIT_FLAG_1);
	}
	if( ( value & BIT_FLAG_2 ) != BIT_FLAG_0 )
	{
		printf("%#010x AND BIT_FLAG_2  = %#010x\n", value, value & BIT_FLAG_2);
	}
	if( ( value & BIT_FLAG_4 ) != BIT_FLAG_0 )
	{
		printf("%#010x AND BIT_FLAG_4  = %#010x\n", value, value & BIT_FLAG_4);
	}
	if( ( value & BIT_FLAG_8 ) != BIT_FLAG_0 )
	{
		printf("%#010x AND BIT_FLAG_8  = %#010x\n", value, value & BIT_FLAG_8);
	}
	if( ( value & BIT_FLAG_16 ) != BIT_FLAG_0 )
	{
		printf("%#010x AND BIT_FLAG_16 = %#010x\n", value, value & BIT_FLAG_16);
	}
	if( ( value & BIT_FLAG_32 ) != BIT_FLAG_0 )
	{
		printf("%#010x AND BIT_FLAG_32 = %#010x\n", value, value & BIT_FLAG_32);
	}
	if( ( value & BIT_FLAG_64 ) != BIT_FLAG_0 )
	{
		printf("%#010x AND BIT_FLAG_64 = %#010x\n", value, value & BIT_FLAG_64);
	}
	if( ( value & BIT_FLAG_128 ) != BIT_FLAG_0 )
	{
		printf("%#010x AND BIT_FLAG_128 = %#010x\n", value, value & BIT_FLAG_128);
	}
}

int main()
{
    unsigned int PW_PLUSB	= 0x00000007;
    unsigned int PW_ACC	= 0x00000061;
	unsigned int value;

	printf("%#010x AND %#010x = %#010x\n", PW_PLUSB, PW_ACC, PW_PLUSB & PW_ACC);
    printf("%#010x OR  %#010x = %#010x\n", PW_PLUSB, PW_ACC, PW_PLUSB | PW_ACC);
    printf("%#010x XOR %#010x = %#010x\n", PW_PLUSB, PW_ACC, PW_PLUSB ^ PW_ACC);
    printf("NOT %#010x = %#010x\n", PW_PLUSB, ~PW_PLUSB);

	value = PW_PLUSB | PW_ACC;
    bit_extractor(value);

	return 0;
}

