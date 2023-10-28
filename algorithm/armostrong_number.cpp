#include <iostream>

using namespace std;

int armostrong(int n)
{
    int sum = 0;
    while (n)
    {
        int last = n % 10;
        sum += last * last * last;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int sum = armostrong(n);
    if (n == sum)
        cout << "true\n";
    else
        cout << "false\n";
}