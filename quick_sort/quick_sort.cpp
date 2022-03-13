#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(int *tab, int left, int right) {
    if (right <= left) return;
    int i = left - 1;
    int j = right + 1;
    int pivot = tab[(int) ((left + right) / 2)];
    while (true) {
        while (pivot > tab[++i]);
        while (pivot < tab[--j]);

        if (i <= j)
            swap(tab + i, tab + j);
        else
            break;
    }

    if (j > left)
        quick_sort(tab, left, j);
    if (i < right)
        quick_sort(tab, i, right);
}

int main() {
    int tab[]{5, 1, 3, 7, 9};

    quick_sort(tab, 0, 4);

    cout << tab[0] << endl;
    cout << tab[1] << endl;
    cout << tab[2] << endl;
    cout << tab[3] << endl;
    cout << tab[4] << endl;

    return 0;
}