#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>

using namespace std;

#define STANDARD 1
#define UPPERCASE 2
#define LOWERCASE 3

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Nalezy podac jeden z dostepnych argumentow:\n\n"
             << "\t-p\twyswietlanie danych bez zmian\n"
             << "\t-u\tzamiana wszystkich liter na duze\n"
             << "\t-l\tzamiana liter na male\n";
        cin.clear();
        cin.get();
        return 1;
    }

    int display_mode;

    if (strcmp(argv[1], "-p") == 0) {
        display_mode = STANDARD;
    } else if (strcmp(argv[1], "-u") == 0) {
        display_mode = UPPERCASE;
    } else if (strcmp(argv[1], "-l") == 0) {
        display_mode = LOWERCASE;
    } else {
        cout << "Nalezy podac jeden z dostepnych argumentow:\n\n"
             << "\t-p\twyswietlanie danych bez zmian\n"
             << "\t-u\tzamiana wszystkich liter na duze\n"
             << "\t-l\tzamiana liter na male\n";
        cin.clear();
        cin.get();
        return 1;
    }

    ifstream file("dane.txt");

    if (file.is_open()) {
        string buffer;
        while (getline(file, buffer)) {
            if (display_mode == UPPERCASE)
                transform(buffer.begin(), buffer.end(), buffer.begin(), ::toupper);
            if (display_mode == LOWERCASE)
                transform(buffer.begin(), buffer.end(), buffer.begin(), ::tolower);
            cout << buffer << endl;
        }
        file.close();
    } else {
        cout << "Nie udalo sie otworzyc pliku 'dane.txt'\n";
    }

    cin.clear();
    cin.get();
    return 0;
}
