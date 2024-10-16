#include <stdint.h>

int main(int argc, const char *argv[])
{
	double a = 3.3;
	float b = 2.7;
	long double c = 3.1;

	char d = 0;
	unsigned char e = 42;
	short f = 1000;
	unsigned short g = 42000;
	long h = 123456;
	unsigned long i = 123456789;

	uint8_t l = 76;

	l = 42; // Base 10
	printf("l = %d\n", l);

	l = 0b00101010; // Base 2
	printf("l = %d \n", l);

	l = 052; // Base 8
	printf("l = %d\n", l);

	l = 0xFF; // Base 16
	printf("l = %x\n", l);

	return 0;
}