#include <iostream>
using namespace std;
void pattern(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << "\n";
        ch++;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
}