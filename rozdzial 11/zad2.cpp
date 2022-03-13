#include <iostream>
#include <cstring>

using namespace std;

string input(int n);

int main() {
    cout << "Wprowadz 20 dowolnych znakow lub zakoncz wprowadzenie wpisujac znak bialy:\n";
    string user_input = input(20);
    cout << "Dane ktore wprowadziles to:\n" << user_input;
    return 0;
}

string input(int n) {
    string result;
    int i = 0;
    char buffor;
    while (i < n && cin.get(buffor)) {
        if (isspace(buffor)) break;
        result.push_back(buffor);
        i++;
    }

    return result;
}