#include <bits/stdc++.h>
#include <vector>
using namespace std;

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int longest_consecutive_sequence(vector<int> &a, int n)
{
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        int ct = 1;
        x++;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] == x)
            {
                ct++;
                x++;
            }
        }
        longest = max(longest, ct);
    }
    return longest;
}

int longest_consecutive_sequence1(vector<int> &a, int n)
{
    int longest = 1, last_smaller = INT_MIN, ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - 1 == last_smaller)
        {
            ct++;
            last_smaller = a[i];
        }
        else if (a[i] != last_smaller)
        {
            ct = 1;
            last_smaller = a[i];
        }
        longest = max(longest, ct);
    }
    return longest;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    print(a, n);
    cout << longest_consecutive_sequence1(a, n) << endl;
    return 0;
}