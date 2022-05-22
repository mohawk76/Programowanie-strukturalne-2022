#include <iostream>
#include <cstring>
#include <cwchar>

using namespace std;

void kopiuj(const char *src, char **dest) {
    size_t size = strlen(src);
    char *new_sting = new char[size + 1];
    int i = 0;
    while (true) {
        new_sting[i] = src[i];
        if (src[i] == '\0') break;
        i++;
    }
    *dest = new_sting;
}

void kopiuj2(const wchar_t *src, wchar_t **dest) {
    size_t size = wcslen(src);
    wchar_t *new_sting = new wchar_t[size + 1];
    int i = 0;
    while (true) {
        new_sting[i] = src[i];
        if (src[i] == '\0') break;
        i++;
    }
    *dest = new_sting;
}

int main() {
    char *first_string;
    wchar_t *second_string;

    kopiuj("Testowy napis!", &first_string);
    kopiuj2(L"Testowy napis 2!", &second_string);

    cout << "Skopiowany pierwszy napis: " << first_string << endl;
    wcout << L"Skopiowany drugi napis: " << second_string << endl;

    delete[] first_string;
    delete[] second_string;
    return 0;
}