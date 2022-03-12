#include <iostream>

using namespace std;

int min(int, int);

int main()
{
    cout << "Z liczb 100 i 200, mniejsza jest liczba " << min(100, 200) << endl;
    return 0;
}

int min(int a, int b)
{
    if (a >= b)
        return b;
    return a;
}