#include <stdio.h>

using namespace std;

int main()
{
	double base = 0;
	double height = 0;
	double triangleArea = 0;
	printf_s("Enter input data: \n");
	printf_s("\nEnter base of a triangle: ");
	scanf_s("%lf", &base);
	printf_s("Enter height of a triangle: ");
	scanf_s("%lf", &height);
	triangleArea = 0.5 * base * height;
	printf_s("\nArea of triangle is %lf sq.cm\n ", triangleArea);
}