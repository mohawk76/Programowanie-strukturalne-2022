#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string input();

int main() {
    cout << "Wprowadz slowo:\n";
    string user_input = input();
    cout << "Slowo ktore wprowadziles to:\n" << user_input;
    return 0;
}

string input() {
    string result;
    char buffer;
    while (cin.get(buffer)) {
        if (isspace(buffer)) break;
        result.push_back(buffer);
    }

    return result;
}