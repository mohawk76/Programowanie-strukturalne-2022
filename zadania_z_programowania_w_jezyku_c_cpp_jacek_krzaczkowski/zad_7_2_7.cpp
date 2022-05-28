#include <iostream>

using namespace std;

struct zespolone {
    double re;
    double im;
};

zespolone dodaj(zespolone a, zespolone b) {
    return zespolone
            {
                    a.re + b.re,
                    a.im + b.im
            };
}

void wyswietl(zespolone a) {
    cout << a.re << " + " << a.im << "i";
}

int main() {
    zespolone a{2, 4};
    zespolone b{3, 5};
    zespolone wynik = dodaj(a, b);

    wyswietl(a);
    cout << " + ";
    wyswietl(b);
    cout << " = ";
    wyswietl(wynik);
    cout << endl;
    cin.get();
    return 0;
}