#include <iostream>
#include <cmath>

using namespace std;

double harmonic_avg(double, double);

int main() {
    cout << "Srednia harmoniczna z 100 i 200 to: " << harmonic_avg(100, 200);
    return 0;
}

double harmonic_avg(double a, double b) {
    a = pow(a, -1);
    b = pow(b, -1);
    double avg = (a + b) / 2;
    return pow(avg, -1);
}