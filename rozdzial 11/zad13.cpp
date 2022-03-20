#include <iostream>
#include <cmath>

using namespace std;

void display_array(char **tab, int n);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Nalezy podac 2 argumenty: podstawe i potege\n";
        cin.clear();
        cin.get();
        return 1;
    }
    double x = stod(argv[1]);
    int y = stoi(argv[2]);
    cout << pow(x, y) << endl;
    cin.clear();
    cin.get();
    return 0;
}
