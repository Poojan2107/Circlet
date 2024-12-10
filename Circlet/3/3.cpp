// A program that prints the given Inverted Left half triangle pattern using a nested for loop.

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows for the pattern: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
    return 0;
}