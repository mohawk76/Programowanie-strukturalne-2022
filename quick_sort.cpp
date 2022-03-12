#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(int *tab, int left, int right)
{
    if (right <= left) return;
    int i = left - 1;
    int j = right + 1;
    int pivot = tab[(int)((left + right) / 2)];
    while (true)
    {
        while (pivot < tab[++i]);
        while (pivot > tab[--j]);

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

int main()
{
    cout << "Wprowadz trzy liczby, a wyswietle je uporzadkowane malejaco\n";
    int tab[3];
    cout << "Wprowadz pierwsza liczbe: ";
    cin >> tab[0];
    cout << "Wprowadz druga liczbe: ";
    cin >> tab[1];
    cout << "Wprowadz trzecia liczbe: ";
    cin >> tab[2];

    quick_sort(tab, 0, 2);

    cout << tab[0] << endl;
    cout << tab[1] << endl;
    cout << tab[2] << endl;

    return 0;
}