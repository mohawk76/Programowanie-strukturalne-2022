#include <iostream>

using namespace std;

void convert_number(int, int);

int main() {
    convert_number(4, 2);
    cout << endl;
    convert_number(209, 4);
    cout << endl;
    convert_number(209, 16);
    cout << endl;
    convert_number(209, 12);
    cout << endl;
    convert_number(209, 15);
    cout << endl;
    convert_number(422, 18);
    cout << endl;
    return 0;
}

void convert_number(int num, int base = 2) {
    if (base > 16) {
        cout << "Nieobslugiwany system liczbowy";
        return;
    }
    static const char letters[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int r = num % base;
    if (num >= base) convert_number(num / base, base);
    if (r < 10) {
        cout << r;
    } else {
        int index = r - 10;
        cout << letters[index];
    }

}