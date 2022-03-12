#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (tab[i] < tab[j])
                swap(tab + i, tab + j);
        }
    }
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

    bubble_sort(tab, 3);

    cout << tab[0] << endl;
    cout << tab[1] << endl;
    cout << tab[2] << endl;

    return 0;
}
