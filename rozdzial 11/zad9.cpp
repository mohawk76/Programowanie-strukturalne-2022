#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string clear_spaces(const string &buffer);

int main() {
    cout << "Wpisz tekst, a ja wypisze go bez odstepow, aby zakonczyc program wpisz pusty ciag znakow:\n";
    string buffer;
    while (getline(cin, buffer)) {
        if (buffer.empty()) break;
        cout << "Tekst wpisany przez ciebie bez odstepow: " << clear_spaces(buffer) << endl;
    }
    cin.clear();
    cin.get();
    return 0;
}

string clear_spaces(const string &buffer) {
    string temp = "";
    for (int i = 0; i < buffer.length(); ++i) {
        if (!isspace(buffer[i]))temp += buffer[i];
    }
    return temp;
}