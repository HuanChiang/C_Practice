#include <stdio.h>
#include <stdlib.h>

#define BYTE unsigned char

#define SET_BIT(x, n) ((x) |= (1 << (n))) 
#define CLEAR_BIT(x, n) ((x) &= ~(1 << (n)))
#define INVERSE_BIT(x, n) ((x) ^= (1 << (n)))

void set_bit(BYTE y, BYTE n) 
{
	y |= (1 << n);
	printf("Set bit : 0x%x\n", y);
}

void clear_bit(BYTE y, BYTE n) 
{
	y &= ~(1 << n);
	printf("Clear bit : 0x%x\n", y);
}

void inverse_bit(BYTE y, BYTE n) 
{
	y ^= (1 << n);
	printf("Inverse bit : 0x%x\n", y);
}

int main(void) 
{
	BYTE x = 0x45; //0100 0101
	BYTE n = 1;

	set_bit(x, n);
	printf("Set bit : 0x%x\n", SET_BIT(x, n));
	clear_bit(x, n);
	printf("Clear bit : 0x%x\n", CLEAR_BIT(x, n));
	inverse_bit(x, n);
	printf("Inverse bit : 0x%x\n", INVERSE_BIT(x, n));

	return 0;
} 

