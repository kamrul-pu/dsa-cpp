#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch++ << " ";
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