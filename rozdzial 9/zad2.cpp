#include <iostream>

using namespace std;

void rzad_zn(char, int, int);

int main() {
    rzad_zn('z', 0, 3);
    rzad_zn('d', 3, 6);
    rzad_zn('z', 0, 3);
    cin.clear();
    cin.get();
    return 0;
}

void rzad_zn(char ch, int i, int j) {
    for (int x = 0; x < i; x++) {
        cout << ' ';
    }
    for (int x = i; x < j; x++) {
        cout << ch;
    }
    cout << endl;
}