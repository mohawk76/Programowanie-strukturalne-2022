#include <iostream>
#include <cstring>

using namespace std;

const char *search_char(const char *str, char ch);

int main() {
    const char *test_string = "testowy ciag znakow";
    const char *found = search_char(test_string, 's');
    const char *not_found = search_char(test_string, 'x');
    cout << "Wskaznik na litere 's' w ciagu znakow '" << test_string << "': " << hex << "0x"
         << reinterpret_cast<intptr_t>(found) << endl;
    cout << "Wskaznik na litere 'x' w ciagu znakow '" << test_string << "': " << hex << "0x"
         << reinterpret_cast<intptr_t>(not_found) << endl;
    return 0;
}

const char *search_char(const char *str, char ch) {
    int size = strlen(str);
    for (int i = 0; i < size; i++) {
        if (str[i] == ch) return str + i;
    }
    return nullptr;
}