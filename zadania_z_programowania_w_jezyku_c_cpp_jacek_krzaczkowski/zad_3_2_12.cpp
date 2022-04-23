#include <iostream>

using namespace std;

double * create_block(int n)
{
    double * block = new double[n];
    return block;
}

int main()
{
    int n = 5;
    double * block = create_block(n);

    delete [] block;
    return 0;
}