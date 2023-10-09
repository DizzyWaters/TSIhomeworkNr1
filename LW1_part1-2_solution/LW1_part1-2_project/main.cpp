#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    int res;

    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << endl;
    res = a * a;
    cout << "Square root of " << a << " is " << res << endl;
    res = a + b;
    cout << a << " + " << b << " = " << res << endl;
    res = a - b;
    cout << a << " - " << b << " = " << res << endl;
    res = a * b;
    cout << a << " * " << b << " = " << res << endl;

    if (b == 0)
    {
        printf_s("Can not divide by zero!");
    }
    else
    {
        cout << a << " / " << b << " = " << fixed << setprecision(3) << ((float)a / (float)b) << endl;
    }

    return 0;
}