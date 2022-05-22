#include <iostream>

using namespace std;

void kopiuj(const char *src, char *dest) {
    int i = 0;
    while (true) {
        dest[i] = src[i];
        if (src[i] == '\0') return;
        i++;
    }
}

void kopiuj2(const wchar_t *src, wchar_t *dest) {
    int i = 0;
    while (true) {
        dest[i] = src[i];
        if (src[i] == '\0') return;
        i++;
    }
}

int main()
{
    char first_string[64];
    wchar_t second_string[64];

    kopiuj("Testowy napis!", first_string);
    kopiuj2(L"Testowy napis 2!", second_string);

    cout << "Skopiowany pierwszy napis: " << first_string << endl;
    wcout << L"Skopiowany drugi napis: " << second_string << endl;

    return 0;
}