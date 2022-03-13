#include <iostream>

using namespace std;

int main() {
    cout << "Wprowadz dwie liczby, a wyswietle je uporzadkowane rosnaco\n";
    int a, b;
    cout << "Wprowadz pierwsza liczbe: ";
    cin >> a;
    cout << "Wprowadz druga liczbe: ";
    cin >> b;

    if (a <= b) {
        cout << a << endl
             << b << endl;
    } else {
        cout << b << endl
             << a << endl;
    }

    return 0;
}
