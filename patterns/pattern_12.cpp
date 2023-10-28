#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // number 1 to i
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // space 2*n - 2*i
        for (int j = 1; j <= (2 * n - 2 * i); j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        // Number i to 1
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
}