#include <iostream>
#include <string>

using namespace std;

struct student {
    string imie;
    string nazwisko;
    string adres;
    string pesel;
    string kierunek;
    string numer_legitymacji;
};

void wprowadz_studenta(student *rekord) {
    cout << "Wprowadz imie: ";
    cin >> rekord->imie;

    cout << "Wprowadz nazwisko: ";
    cin >> rekord->nazwisko;

    cout << "Wprowadz adres: ";
    cin.ignore();
    getline(cin, rekord->adres);

    cout << "Wprowadz pesel: ";
    cin >> rekord->pesel;

    cout << "Wprowadz kierunek: ";
    cin >> rekord->kierunek;

    cout << "Wprowadz numer legitymacji: ";
    cin >> rekord->numer_legitymacji;
}

void wyswietl_dane_studenta(const student *rekord) {
    cout << "Imie i nazwisko: " << rekord->imie << " " << rekord->nazwisko << endl;
    cout << "Adres: " << rekord->adres << endl;
    cout << "Pesel: " << rekord->pesel << endl;
    cout << "Kierunek: " << rekord->kierunek << endl;
    cout << "Numer legitymacji: " << rekord->numer_legitymacji << endl;
}

int main() {
    student rekord;
    wprowadz_studenta(&rekord);
    wyswietl_dane_studenta(&rekord);
    cin.ignore();
    cin.clear();
    cin.get();
    return 0;
}