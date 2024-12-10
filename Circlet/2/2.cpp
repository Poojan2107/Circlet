// A program that prints the given Floyd’s triangle pattern using a nested for loop.

#include <iostream>
using namespace std;

int main()
{
    int rows, num = 11;
    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}