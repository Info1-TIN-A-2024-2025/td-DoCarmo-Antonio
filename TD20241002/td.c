#include <stdio.h>
double U = 0;
double I = 0;
double R = 0;

int main(int argc, const char *argv[])
{
	puts("Enter the voltage [V]");
	scanf("%lf", &U);
	puts("Enter the resistance [Ω]");
	scanf("%lf", &R);

	if(R <= 0)
	{
		puts("Incorrect value");
		return 1;
	}

		I = U / R;
		printf("Result is %.2E", I);
		return 0;
}