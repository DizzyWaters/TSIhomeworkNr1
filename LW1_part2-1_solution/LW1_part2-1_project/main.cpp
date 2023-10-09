#include <iostream>

using namespace std;
// rectangle
int main()
{
	int width, height, result;
	cout << "Enter input data: \n" << endl;
	cout << "Rectangle width (cm) -> ";
	cin >> width;
	cout << "Rectangle heigth (cm) -> ";
	cin >> height;
	cout << endl;
	result = width * height;
	cout << "Area of the rectangle is: " << result << " sq.cm" << endl;

	return 0;
}