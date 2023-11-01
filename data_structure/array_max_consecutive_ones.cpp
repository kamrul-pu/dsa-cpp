#include <iostream>
#include <set>
#include <vector>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int max_consecutive_ones(int a[], int n)
{
    // TC = O(n) Space O(1)
    int mx = 0;
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            ct = 0;
        }
        else
        {
            ct++;
            mx = max(mx, ct);
        }
    }
    return mx;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    // cout << find_missing(a, n) << endl;
    // cout << find_missing1(a, n) << endl;
    cout << max_consecutive_ones(a, n) << endl;

    return 0;
}
