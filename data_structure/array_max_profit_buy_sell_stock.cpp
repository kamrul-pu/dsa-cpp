#include <bits/stdc++.h>
#include <map>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int max_profit(int a[], int n)
{
    int profit = 0, buy = a[0];
    for (int i = 1; i < n; i++)
    {
        int cost = a[i] - buy;
        profit = max(profit, cost);
        buy = min(buy, a[i]);
    }
    return profit;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    print(a, n);
    cout << max_profit(a, n) << endl;
    return 0;
}