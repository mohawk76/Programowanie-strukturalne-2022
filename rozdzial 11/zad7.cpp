#include <iostream>
#include <cstring>

using namespace std;

const char *zawiera_lan(const char *s1, const char *s2);

int main() {
    const char *test_string = "Hello world!";

    const char *found = zawiera_lan(test_string, "world");
    const char *not_found = zawiera_lan(test_string, "test");
    cout << "Wskaznik na litere 'world' w ciagu znakow '" << test_string << "': " << hex << "0x"
         << reinterpret_cast<intptr_t>(found) << endl;
    cout << "Wskaznik na litere 'test' w ciagu znakow '" << test_string << "': " << hex << "0x"
         << reinterpret_cast<intptr_t>(not_found) << endl;
    return 0;
}

const char *zawiera_lan(const char *subject, const char *search) {
    const int subject_length = strlen(subject);
    const int search_length = strlen(search);
    for (int i = 0; i < subject_length; ++i) {
        for (int j = 0; j < search_length; ++j) {
            if (search[j] != subject[i + j]) break;
            return (subject + i);
        }
    }
    return nullptr;
}