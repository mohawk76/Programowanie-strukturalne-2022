#include <iostream>
#include <cmath>

using namespace std;

int max_val(const int n, const int *tab) {
    int max = tab[0];
    for (int i = 0; i < n; ++i) {
        if (max < tab[i]) max = tab[i];
    }
    return max;
}

int min_val(const int n, const int *tab) {
    int min = tab[0];
    for (int i = 0; i < n; ++i) {
        if (min > tab[i]) min = tab[i];
    }
    return min;
}

int max_idx(const int n, const int *tab) {
    int max_idx = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[max_idx] < tab[i]) max_idx = i;
    }
    return max_idx;
}

int min_idx(const int n, const int *tab) {
    int min_idx = 0;
    for (int i = 0; i < n; ++i) {
        if (tab[min_idx] > tab[i]) min_idx = i;
    }
    return min_idx;
}

int max_abs_val(const int n, const int *tab) {
    int max = abs(tab[0]);
    for (int i = 0; i < n; ++i) {
        if (max < abs(tab[i])) max = abs(tab[i]);
    }
    return max;
}

int max_abs_idx(const int n, const int *tab) {
    int max_idx = 0;
    for (int i = 0; i < n; ++i) {
        if (abs(tab[max_idx]) < abs(tab[i])) max_idx = i;
    }
    return max_idx;
}

int main() {
    int tab[] = {31, 21, 12, 1, -22, -64, 15, 16};
    cout << "Najwieksza wartosc tablicy: " << max_val(8, tab) << endl;
    cout << "Indeks najwiekszej wartosci tablicy: " << max_idx(8, tab) << endl;

    cout << "Najmniejsza wartosc tablicy: " << min_val(8, tab) << endl;
    cout << "Indeks najmniejszej wartosci tablicy: " << min_idx(8, tab) << endl;

    cout << "Najwieksza wartosc bezwgledna tablicy: " << max_abs_val(8, tab) << endl;
    cout << "Indeks najwiekszej wartosci bezwglednej tablicy: " << max_abs_idx(8, tab) << endl;

    return 0;
}