#include <iostream>
#include <memory>
#include <string>
#include <cctype>

using namespace std;

int menu();

void display_strings(string tab[], int n);

void display_strings_ascii(string tab[], int n);

void display_strings_length(string tab[], int n);

void display_strings_first_word(string tab[], int n);

int main() {
    cout << "Wpisz do 10 ciagow znakow lub zakoncz wprowadzanie wpisujac znak konca pliku\n";
    string strings[10];
    string buffer;
    int i = 0;
    while (getline(cin, buffer) && i < 10) {
        strings[i++] = buffer;
    }
    cin.clear();
    bool exit = false;
    do {
        switch (menu()) {
            case 1:
                display_strings(strings, i);
                break;
            case 2:
                display_strings_ascii(strings, i);
                break;
            case 3:
                display_strings_length(strings, i);
                break;
            case 4:
                display_strings_first_word(strings, i);
                break;
            case 5:
                exit = true;
        }
    } while (!exit);

    return 0;
}

void copy_array(string *src, string *dest, int size) {
    for (int i = 0; i < size; ++i) {
        dest[i] = src[i];
    }
}

template<class T>
void swap(T *a, T *b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(string *tab, int left, int right) {
    if (right <= left) return;
    int i = left - 1;
    int j = right + 1;
    string pivot = tab[(int) ((left + right) / 2)];
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

void length_sort(string *tab, int n) {
    unique_ptr<int[]> temp = make_unique<int[]>(n);
    for (int i = 0; i < n; ++i) {
        temp[i] = tab[i].length();
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (temp[i] > temp[j]) {
                swap(temp.get() + i, temp.get() + j);
                swap(tab + i, tab + j);
            }
        }
    }
}

void first_word_length_sort(string *tab, int n) {
    unique_ptr<int[]> temp = make_unique<int[]>(n);
    for (int i = 0; i < n; ++i) {
        int size = 0;
        for (int j = 0; j < tab[i].length(); j++) {
            if(!isalnum(tab[i].at(j))) break;
            size++;
        }
        temp[i] = size;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (temp[i] > temp[j]) {
                swap(temp.get() + i, temp.get() + j);
                swap(tab + i, tab + j);
            }
        }
    }
}

int menu() {
    int option;
    cout << "Wybierz opcje:\n" <<
         "1.\tWyswietl lancuchy\n" <<
         "2.\tWyswietl lancuchy w porzadku ASCII\n" <<
         "3.\tWyswietl lancuchy wedlug dlugosci\n" <<
         "4.\tWyswietl lancuchy wedlug dlugosci pierwszego slowa\n" <<
         "5.\tWyjscie\n";
    cin >> option;
    cin.clear();
    return option;
}

void display_strings(string tab[], int n) {
    cout << "Wyswietlam tablice:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ".\t" << tab[i] << endl;
    }
    cout << endl;
}

void display_strings_ascii(string tab[], int n) {
    unique_ptr<string[]> temp = make_unique<string[]>(n);
    copy_array(tab, temp.get(), n);
    quick_sort(temp.get(), 0, n - 1);
    cout << "Wyswietlam tablice, w porzadku ASCII:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ".\t" << temp[i] << endl;
    }
    cout << endl;
}

void display_strings_length(string tab[], int n) {
    unique_ptr<string[]> temp = make_unique<string[]>(n);
    copy_array(tab, temp.get(), n);
    length_sort(temp.get(), n);
    cout << "Wyswietlam tablice, wedlug dlugosci(rosnaco):\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ".\t" << temp[i] << endl;
    }
    cout << endl;
}

void display_strings_first_word(string tab[], int n) {
    unique_ptr<string[]> temp = make_unique<string[]>(n);
    copy_array(tab, temp.get(), n);
    first_word_length_sort(temp.get(), n);
    cout << "Wyswietlam tablice, wedlug dlugosci pierwszego slowa(rosnaco):\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ".\t" << temp[i] << endl;
    }
    cout << endl;
}