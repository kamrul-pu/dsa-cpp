#include <iostream>
using namespace std;

void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star (2*i) + 1
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*";
        }
        // Space n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

void pyramid_reverse(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space i
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star 2n - (2i+1)
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // Space i
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    pyramid(n);
    pyramid_reverse(n);
}