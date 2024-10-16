#include <limits.h>
#include <float.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("The range of a variable type char is %d ... %d\n", CHAR_MIN, CHAR_MAX);

	printf("The range of a variable type short is %d ... %d\n", SHRT_MIN, SHRT_MAX);

	printf("The range of a variable type float is %f ... %f\n", FLT_MIN, FLT_MAX);

	printf("The range of a variable type double is %lf ... %lf\n", DBL_MIN, DBL_MAX);

	float x = 1E-40;
	double y = 1E-40;
	double d = 42.0;
	double e = 0.0;
	const double c = 299792458.0;

	printf("%lf\n", 2.237 * c);

	printf("d / e = %f\n", d / e);

	printf("%.50lf\n", x);
	printf("%.50lf\n", y);


	return 0;
}

