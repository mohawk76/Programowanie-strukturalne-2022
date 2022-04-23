#include <iostream>

using namespace std;

typedef int (*func)(int);

bool test(func func1, func func2, unsigned int n)
{
 for (int i = 0; i <= n; i++) {
    if(func1(i) != func2(i)) return false;
 }
 return true;
}

int sum(int i)
{
    return i+i;
}

int multiply(int i)
{
    return i*i;
}

int main()
{
    if(test(sum, multiply, 2)){
        std::cout << "Funkcje zwracają takie same wartosci dla n=0"<< std::endl;
    } else {
        std::cout << "Funkcje zwracają różne wartosci dla n=0"<< std::endl;
    }
    return 0;
}
