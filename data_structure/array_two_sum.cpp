#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

bool two_sum(int a[], int n, int target)
{
    // TC = O(n^2) Space O(1)
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

string two_sum1(int a[], int n, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        int more = target - val;
        if (mp.find(more) != mp.end())
        {
            return "YES"; // return {mp[more], i}
        }
        mp[val] = i;
    }
    return "NO";
}

string two_sum2(int a[], int n, int target)
{
    // Using two pointer
    // first sort the array
    sort(a, a + n);
    // declare two pointer
    int left = 0, right = n - 1;
    while (left < right)
    {
        int cur_sum = a[left] + a[right];
        if (cur_sum == target)
        {
            return "YES";
        }
        else if (cur_sum < target)
        {
            left++;
        }
        else
            right--;
    }
    return "NO";
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
    int target;
    cin >> target;
    print(a, n);
    // cout << two_sum(a, n, target) << endl;
    // cout << two_sum1(a, n, target) << endl;
    cout << two_sum2(a, n, target) << endl;
    return 0;
}