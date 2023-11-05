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
int max_sum(int a[], int n)
{
    // TC = O(n^2) Space O(1)
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = a[i];
        for (int j = i + 1; j < n; j++)
        {
            sum += a[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int max_sum1(int a[], int n)
{
    // Kadan's algorithm;
    int mx = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        mx = max(mx, sum);

        if (sum < 0)
            sum = 0;
    }
    return mx = max(mx, 0);
}

int max_sum2(int a[], int n)
{
    // Kadan's algorithm;
    int mx = INT_MIN;
    int sum = 0;
    int start, end = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum += a[i];

        if (sum > mx)
        {
            mx = sum;
            end = i;
        }
        if (sum < 0)
            sum = 0;
    }
    cout << start << " , " << end << endl;
    return mx = max(mx, 0);
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
    cout << max_sum(a, n) << endl;
    cout << max_sum1(a, n) << endl;
    cout << max_sum2(a, n) << endl;
    return 0;
}