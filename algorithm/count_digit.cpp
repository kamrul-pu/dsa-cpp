#include <iostream>
#include <math.h>

using namespace std;

int count_digit(int n)
{
    int ct = 0;
    while (n)
    {
        cout << n % 10 << endl;
        n = n / 10;
        ct++;
    }
    return ct;
}

int count_digit_1(int n)
{
    return (int)(log10(n) + 1);
}

int main()
{
    int n;
    cin >> n;
    cout << count_digit_1(n) << endl;
    cout << count_digit(n) << endl;
}