#include <iostream>

using namespace std;

void show_char_x_y(char, int, int);

int main()
{
    show_char_x_y('z', 6, 1);
    show_char_x_y('d', 3, 6);
    show_char_x_y('z', 6, 1);
    return 0;
}

void show_char_x_y(char ch, int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}