#include <iostream>
using namespace std;

int gcd2(int a, int b)
{
    // GCD Using Euclidean Algorithm
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}
int gcd1(int n1, int n2)
{
    int gcd = 1;
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }
    return gcd;
}

int gcd(int a, int b)
{
    int r = 0;
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2);
}