#include <stdio.h>
#include <stdlib.h>

#define BYTE unsigned char

int bit1Count(int num) {
	int count = 0;

	// 100010 & 100001 = 100000
	while (num != 0) {
		num = num & (num - 1);
		count++;
	}
	return count;
}

int main(void) {
	BYTE valueA = 0x5A; //0101 1010
	BYTE valueB = 0x37; //0011 0111
	printf("The number of 1's bit in 0x%x is %d\n", valueA, bit1Count(valueA));
	printf("The number of 1's bit in 0x%x is %d\n", valueB, bit1Count(valueB));
	return 0;
}