#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int my_atoi(const char *str);

int main() {
    cout << my_atoi("-1       -100") << endl;
    cout << my_atoi("       1sa02yy4      ") << endl;
    cout << my_atoi("-   124") << endl;
    cin.clear();
    cin.get();
    return 0;
}

int my_atoi(const char *str) {
    static const int zero = (int) '0';
    int length = strlen(str);
    int num = 0;
    int place = 0;
    bool negative = false;
    for (int i = length-1; i >=0 ; i--) {
        if (str[i] == '-') negative = !negative;
        else if (isdigit(str[i])) {
            int digit = str[i] - zero;
            digit *= pow(10, place);
            num += digit;
            place++;
        }
    }

    if (negative) num *= -1;
    return num;
}