#include <iostream>
using namespace std;

const int N = 1e3 + 10;
bool prime[N];

bool isPrime(int n)
{
    if (n < 2)
        return false;
    bool is_prime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void preComputePrime()
{
    for (int i = 2; i < N; i++)
    {
        if (prime[i] == false)
        {
            for (int j = i * 2; j < N; j += i)
            {
                prime[j] = true;
            }
        }
    }
}
bool isPrimeOptimized(int n)
{
    return !prime[n];
}
int main()
{
    prime[0] = prime[1] = true;
    preComputePrime();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << n << " is " << isPrimeOptimized(n) << endl;
    }
}