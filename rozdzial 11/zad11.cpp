#include <iostream>
#include <string>

using namespace std;

#define OUT 0
#define IN 1

int main() {
    cout << "Wprowadz ciag znakow lub zakoncz wprowadzanie wpisujac znak konca pliku\n";
    string buffer;
    int words = 0;
    int small_char = 0;
    int big_char = 0;
    int digits = 0;
    int punctuations = 0;
    while (true) {
        if (!getline(cin, buffer)) break;
        int state = OUT;
        for (int i = 0; i < buffer.length(); i++) {
            char c = buffer.at(i);
            bool is_space = isspace(c);
            if (is_space)
                state = OUT;
            else if (islower(c))
                small_char++;
            else if (isupper(c))
                big_char++;
            else if (isdigit(c))
                digits++;
            else if (ispunct(c))
                punctuations++;

            if (!is_space && state == OUT) {
                state = IN;
                words++;
            }
        }
        cout << "Wprowadz ciag znakow lub zakoncz wprowadzanie wpisujac znak konca pliku\n";
    }

    cout << "Ilosc slow: " << words << endl <<
         "Ilosc duzych liter: " << big_char << endl <<
         "Ilosc malych lter: " << small_char << endl <<
         "Ilosc znakow przystankowych: " << punctuations << endl <<
         "Ilosc cyfr: " << digits << endl;

    cin.clear();
    cin.get();
    return 0;
}