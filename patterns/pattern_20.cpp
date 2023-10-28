#include <iostream>
using namespace std;
void pattern(int n)
{
    // inital space
    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        // stars i
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
        if (i < n)
            space -= 2;
        else
            space += 2;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
}