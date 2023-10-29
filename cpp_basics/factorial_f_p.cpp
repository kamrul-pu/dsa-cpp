#include <iostream>
using namespace std;

int fact(int n)
{
    if (n < 1)
        return 1;
    return n * fact(n - 1);
}

void fact1(int n, int result)
{
    if (n == 0)
    {
        cout << result << endl;
        return;
    }
    fact1(n - 1, result * n);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;

    fact1(n, 1);
}