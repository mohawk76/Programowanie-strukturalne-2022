#include <iostream>

using namespace std;

double scalar_multiple(int n, double *tab1, double *tab2) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        result += tab1[i] * tab2[i];
    }
    return result;
}

int main() {
    double arr1[] = {1.33, 2, 6, 9, 1};
    double arr2[] = {10, 2.11, 14.2, 9, 1.1};
    cout << "Iloczyn skalarny wektorow wynosi: " << scalar_multiple(5, arr1, arr2);
    return 0;
}