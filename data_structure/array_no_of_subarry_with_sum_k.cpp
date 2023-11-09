#include <iostream>
#include <unordered_map>
using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int number_of_sub_array_with_k(int a[], int n, int k)
{
    // TC O(n^2)
    // Space O(1) no extra space
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == k)
            {
                ct++;
            }
        }
    }
    return ct;
}

int number_of_sub_array_with_sum_k(int a[], int n, int k)
{
    // TC O(N*logN) if ordered map
    // TC O(N) if unordered map best and avg worst O(N^2)
    // Space O(N)
    unordered_map<int, int> mp;
    mp[0] = 1;
    int preSum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        preSum += a[i];
        int remove = preSum - k;
        cnt += mp[remove];
        mp[preSum] += 1;
    }
    return cnt;
}

int main()
{
    int n, k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    print(a, n);
    cout << number_of_sub_array_with_k(a, n, k) << endl;
    cout << number_of_sub_array_with_sum_k(a, n, k) << endl;

    return 0;
}