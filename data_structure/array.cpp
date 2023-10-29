#include <bits/stdc++.h>
using namespace std;

int max_element(int arr[], int n)
{
    // using brute force
    // int mx = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     mx = max(mx, arr[i]);
    // }
    // return mx;
    // first sort and return the last one
    sort(arr, arr + n);
    return arr[n - 1];
}

int second_max(int arr[], int n)
{
    // sort the numbers
    sort(arr, arr + n);
    int mx = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != mx)
            return arr[i];
    }
    return arr[n - 2];
}

int second_largest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int second_smallest(int arr[], int n)
{
    int smallest = arr[0];
    int s_smallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            s_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < s_smallest)
        {
            s_smallest = arr[i];
        }
    }
    return s_smallest;
}

bool is_sorted(int arr[], int n)
{
    bool is_sorted = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            is_sorted = false;
            return false;
        }
    }
    return is_sorted;
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
    cout << max_element(a, n) << endl;
    cout << second_max(a, n) << endl;
    cout << second_largest(a, n) << endl;
    cout << second_smallest(a, n) << endl;

    cout << is_sorted(a, n) << endl;

    return 0;
}