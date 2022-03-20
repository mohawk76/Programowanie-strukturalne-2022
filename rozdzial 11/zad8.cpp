#include <iostream>
#include <cstring>

using namespace std;

void reverse_str(char *s1);

int main() {
    char first_str[] = "Testowy";
    char second_str[] = "Michal";
    cout << "Testowe przypadki:\n" << "\t1. " << first_str << endl;
    cout << "\t2. " << second_str << endl;
    reverse_str(first_str);
    reverse_str(second_str);
    cout << "Testowe przypadki po odwroceniu:\n" << "\t1. " << first_str << endl;
    cout << "\t2. " << second_str << endl;
    cin.clear();
    cin.get();
    return 0;
}

void reverse_str(char *s1) {
    const int length = strlen(s1);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = s1[i];
        s1[i] = s1[j];
        s1[j] = temp;
    }
}