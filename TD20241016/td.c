#include <stdio.h>
#include <math.h>

int n;
unsigned int finalResult;
double finalResultAngle;
int a;

int main(int argc, const char *argv[])
{
	printf("Veuillez entrer votre nombre\n");
	scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    finalResult = (int)log10(n) + 1;

	printf("Nombre de digits : %d\n", finalResult);

	finalResult = (int)log2(n) + 1;

	printf("Nombre de digits base 2 : %d\n", finalResult);

	finalResult = (log10(n))/(log10(16)) + 1;

	printf("Nombre de digits base 16 : %d\n", finalResult);

	//Part 2

	printf("Veuillez entrer vos angles: \n");
	scanf("%d", &a);

	double radians = a * M_PI / 180.0;

	finalResultAngle = sin(radians);
	printf("Sin : %f\n", finalResultAngle);

	finalResultAngle = cos(radians);
	printf("Cos : %f\n", finalResultAngle);

	finalResultAngle = tan(radians);
	printf("Tan : %f\n", finalResultAngle);

	finalResultAngle = sin(radians)/cos(radians);
	printf("Tan 2 : %f\n", finalResultAngle);

	finalResultAngle = tan(radians)-(sin(radians)/cos(radians));
	printf("Tan 1 - tan 2 : %.10lf\n", finalResultAngle);

	return 0;
}