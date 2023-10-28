#include <iostream>
#include <set>

using namespace std;

void divisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
        if (n % i == 0 && n / i != i)
            cout << (n / i) << " ";
    }
}

void divisors1(int n)
{
    // using set then we do not need to check for n/i!=i
    set<int> st;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            st.insert(i);
            st.insert(n / i);
        }
    }
    for (auto val : st)
        cout << val << " ";
}

int main()
{
    int n;
    cin >> n;
    cout << "divisors: ";
    divisors1(n);
}