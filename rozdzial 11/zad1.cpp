#include <iostream>
#include <string>

using namespace std;

string input(int n);

int main() {
    cout << "Wprowadz 20 dowolnych znakow:\n";
    string user_input = input(20);
    cout << "Dane ktore wprowadziles to:\n" << user_input;
    cin.clear();
    cin.get();
    return 0;
}

string input(int n) {
    string result;
    int i = 0;
    char buffer;
    while (i < n && cin.get(buffer)) {
        result.push_back(buffer);
        i++;
    }

    return result;
}