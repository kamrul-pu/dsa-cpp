#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Alphabets 2*i+ 1
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // space n-i-1
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
}