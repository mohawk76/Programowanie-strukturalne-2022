#include <iostream>

using namespace std;

void display_array(char **tab, int n);

int main(int argc, char *argv[]) {
    display_array(argv, argc);
    cin.clear();
    cin.get();
    return 0;
}

void display_array(char **tab, int n) {
    for (int i = n-1; i >= 1; i--) {
        cout << tab[i];
        if (i != 1) cout << " ";
    }
}
