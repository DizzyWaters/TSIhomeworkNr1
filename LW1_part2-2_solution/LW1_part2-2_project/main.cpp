#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

const float Pi = 3.1416;

int main()
{
	// Here is actually working a solution where float was used, but I don't like the percision, so there will be another one with double.

	/*
	float circleArea, circleRadius;
	printf("Enter input data:\n\n");
	printf("Circle radiuss (cm) -> ");
	scanf_s("%f", &circleRadius);
	printf("\n");
	circleArea = Pi * (circleRadius * circleRadius);
	printf("Area of the circle is %.4f sq.cm", circleArea);
	printf("\n");
	*/

	// With double

	double circleArea = 0;
	double circleRadius = 0;
	printf("Enter input data:\n\n");
	printf("Circle radiuss (cm) -> ");
	scanf_s("%lf", &circleRadius);
	circleArea = Pi * (circleRadius * circleRadius);
	printf("\nArea of the circle is %.4lf sq.cm", circleArea);
	printf("\n");

	return 0;
}