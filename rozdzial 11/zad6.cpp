#include <iostream>
#include <cstring>

using namespace std;

const char *my_strncmp(char *s1, const char *s2, int n);

int main() {
    const char *test_string = "Hello world!";
    char buffer[32];

    my_strncmp(buffer, test_string, 15);

    cout << "Po skopiowaniu ciagu '" << test_string << "' w buforze znajduje sie ciag '" << buffer << "'\n";
    return 0;
}

const char *my_strncmp(char *s1, const char *s2, int n) {
    int s2_size = strlen(s2);
    for (int i = 0; i < n; ++i) {
        if (i < s2_size)
            s1[i] = s2[i];
        else
            s1[i] = '\0';
    }
    return s1;
}