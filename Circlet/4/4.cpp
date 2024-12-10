// A program that prints the given Full Pyramid pattern using a nested for loop.

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows for the pattern: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= rows; j++)
        {
            cout << j << " ";
        }
        for (int j = rows - 1; j >= i; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
