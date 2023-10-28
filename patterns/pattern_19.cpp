#include <iostream>
using namespace std;
void pattern(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        // stars n-i
        for (int j = 0; j < n - i; j++)
            cout << "*";
        // spaces 0,2,4,6,8
        for (int j = 0; j < space; j++)
            cout << " ";
        // stars n-i
        for (int j = 0; j < n - i; j++)
            cout << "*";

        cout << "\n";
        space += 2;
    }
    // Second Half
    space = 8;
    for (int i = 0; i < n; i++)
    {
        // stars i
        for (int j = 0; j <= i; j++)
            cout << "*";
        // spaces 8,6,4,2,0
        for (int j = 0; j < space; j++)
            cout << " ";
        // stars i
        for (int j = 0; j <= i; j++)
            cout << "*";

        cout << "\n";
        space -= 2;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
}