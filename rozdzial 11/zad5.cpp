#include <iostream>
#include <cstring>

using namespace std;

int search_char(const char *str, char ch);

void found_message(const char *str, char ch);

void not_found_message(const char *str, char ch);

int main() {
    const char *test_string = "testowy ciag znakow";
    if (search_char(test_string, 's')) {
        found_message(test_string, 's');
    } else {
        not_found_message(test_string, 's');
    }

    if (search_char(test_string, 'x')) {
        found_message(test_string, 'x');
    } else {
        not_found_message(test_string, 'x');
    }

    return 0;
}

int search_char(const char *str, char ch) {
    int size = strlen(str);
    for (int i = 0; i < size; i++) {
        if (str[i] == ch) return 1;
    }
    return 0;
}

void found_message(const char *str, char ch) {
    cout << "W ciagu znakow '" << str << "', znajduje sie znak '" << ch << "'" << endl;
}

void not_found_message(const char *str, char ch) {
    cout << "W ciagu znakow '" << str << "', nie znajduje sie znak '" << ch << "'" << endl;
}
