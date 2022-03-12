#include <iostream>

using namespace std;

double power(double, double);

int main()
{
    cout << "2^10 = " << power(2, 10) << endl;
    cout << "2^(-1) = " << power(2, -1) << endl;
    cout << "2^(-2) = " << power(2, -2) << endl;
    cout << "5^2 = " << power(5, 2) << endl;
    cout << "0^0 = " << power(0, 0) << endl;
    cout << "12^0 = " << power(12, 0) << endl;
    return 0;
}

double power(double a, double b)
{
    if (a == 0)
        return 0;
    if (b < 0)
    {
        b = -b;
        return (1 / power(a, b));
    }
    else if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}