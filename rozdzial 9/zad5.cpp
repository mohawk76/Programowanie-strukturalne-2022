#include <iostream>

using namespace std;

int num_of_alphabet(char);

int main()
{
    char ch;
    cout << "Wpisz dowolne litery, a ja podam ci jaki jest ich numer w alafabecie, aby zakonczyc program podaj mi znak eof\n";
    while(cin >> ch)
    {
        cout << ch << ": " << num_of_alphabet(ch) << endl;
    }
    return 0;
}

bool is_between(int x, int a, int b, bool equal = true)
{
    if(equal) return (a <= x && x <= b);
    return (a < x && x < b);
}

int num_of_alphabet(char ch)
{
    static const int FIRST_SMALL_LETTER = (int)('a');
    static const int LAST_SMALL_LETTER = (int)('z');
    static const int FIRST_BIG_LETTER = (int)('A');
    static const int LAST_BIG_LETTER = (int)('Z');
    
    int ch_code = (int)(ch);
    
    bool is_small_letter = is_between(ch_code, FIRST_SMALL_LETTER, LAST_SMALL_LETTER);
    bool is_big_letter = is_between(ch_code, FIRST_BIG_LETTER, LAST_BIG_LETTER);
    
    if(is_small_letter) return (ch_code - FIRST_SMALL_LETTER + 1);
    else if(is_big_letter) return (ch_code -FIRST_BIG_LETTER + 1);
    else  return -1;
}