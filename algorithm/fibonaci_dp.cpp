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

int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}