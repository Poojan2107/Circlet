// A program that prints the given Right half triangle pattern using a nested for loop.

#include <iostream>
using namespace std;

int main()
{
    int rows, start = 41;
    cout << "Enter the number of rows for the pattern: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        int num = start;
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}