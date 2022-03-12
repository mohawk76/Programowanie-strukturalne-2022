#include <iostream>

using namespace std;

double min(double, double);

int main()
{
    cout << "Z liczb 100 i 200, mniejsza jest liczba " << min(100.0, 200.0) << endl;
    return 0;
}

double min(double a, double b)
{
    if (a >= b)
        return b;
    return a;
}