// A program that prints the given Custom numeric pattern using a nested for loop.

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
