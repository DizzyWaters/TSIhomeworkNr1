#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

const float Pi = 3.1416;

int main()
{
	float circleArea, circleRadius;
	char test;
	printf("Enter input data:\n\n");
	printf("Circle radiuss (cm) -> ");
	scanf_s("%f", &circleRadius);
	printf("\n");
	circleArea = Pi * (circleRadius * circleRadius);
	printf("Area of the circle is %.4f sq.cm", circleArea);
	printf("\n");
	
	return 0;
}