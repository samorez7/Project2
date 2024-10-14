#include <stdio.h>
#include <math.h>

int main()
{
	double a = 4.09, b = 2.57, x = -6.31;

		double numerator = sqrt(a * pow(x, 3) + 3);
	
	double denominator = exp(b - fabs(6 * log(3 * x)));
	
	double result = numerator / denominator;

	printf("Результат: %.6f/n", result);

	return 0;
}