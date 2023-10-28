#include <iostream>

using namespace std;

int reverse_num(int n)
{

    int sum = 0;
    while (n)
    {
        sum = sum * 10 + (n % 10);
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << reverse_num(n) << endl;
}