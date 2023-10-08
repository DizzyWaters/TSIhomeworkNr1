#include <iostream>
#include <stdio.h>

using namespace std;

int main() 
{
	int a, b;
	int res;
	float result;
	printf("Enter number 1: ");
	scanf_s("%i", &a);
	printf("Enter number 2: ");
	scanf_s("%i", &b);
	printf_s("\n");
	res = a * a;
	printf_s("Square of %i is %i\n", a, res);
	res = a + b;
	printf_s("%i + %i = %i\n", a, b, res);
	res = a - b;
	printf_s("%i - %i = %i\n", a, b, res);
	res = a * b;
	printf_s("%i * %i = %i\n", a, b, res);
	
	if (b == 0)
	{
		printf_s("Can not divide by zero!");
	}
	else 
	{
		result = (float)a / (float)b;
		printf_s("%i / %i = %.2f\n", a, b, result);
	}
	
	return 0;
}