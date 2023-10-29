#include <iostream>
#include <vector>
using namespace std;
const int N = 1e3 + 5;
vector<long long> dp(N, -1);

int fibo(int n)
{
    if (dp[n] != -1)
        return dp[n];
    if (n <= 1)
        return n;
    return dp[n] = fibo(n - 1) + fibo(n - 2);
}

int fib(int n)
{
    if (n <= 1)
        return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++)
    {
        int temp = a;
        a = b;
        b = temp + b;
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    cout << fib(n) << endl;
}