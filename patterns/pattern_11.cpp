#include <iostream>
using namespace std;
void pattern(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        // if even then start with one else zero
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            // flip the number
            start = 1 - start;
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
}