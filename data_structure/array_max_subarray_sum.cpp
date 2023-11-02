#include <iostream>
#include <map>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int longest_sub_array_sum(int arr[], int n, int k)
{
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum == k)
                length = max(length, j - i + 1);
        }
    }
    return length;
}
int longest_sub_array_sum1(int arr[], int n, int k)
{
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                length = max(length, j - i + 1);
                break;
            }
        }
    }
    return length;
}

int longest_sub_array_sum2(int arr[], int n, int k)
{
    map<int, int> prefix_sum;
    int sum = 0;
    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            max_len = max(max_len, i + 1);
        }
        int rem = sum - k;
        if (prefix_sum.find(rem) != prefix_sum.end())
        {
            int len = i - prefix_sum[rem];
            max_len = max(max_len, len);
        }
        if (prefix_sum.find(sum) == prefix_sum.end())
        {
            prefix_sum[sum] = i;
        }
    }
    return max_len;
}

int longest_sub_array_sum3(int arr[], int n, int k)
{
    int sum = arr[0];
    int max_len = 0;
    int left = 0, right = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            max_len = max(max_len, right - left + 1);
        }
        right++;
        if (right < n)
            sum += arr[right];
    }
    return max_len;
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
    // cout << find_missing(a, n) << endl;
    // cout << find_missing1(a, n) << endl;
    cout << longest_sub_array_sum(a, n, 10) << endl;
    cout << longest_sub_array_sum1(a, n, 10) << endl;
    cout << longest_sub_array_sum2(a, n, 10) << endl;
    cout << longest_sub_array_sum3(a, n, 10) << endl;
    return 0;
}
