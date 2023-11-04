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

void sort1(int a[], int n)
{
    // TC = O(n^2) Space O(1)
    int ct_0 = 0, ct_1 = 0, ct_2 = 0;
    // count number of 0,1,2 in the array
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            ct_0++;
        else if (a[i] == 1)
            ct_1++;
        else
            ct_2++;
    }
    // fill the array with element
    int k = 0;
    for (int i = 0; i < ct_0; i++)
    {
        a[k++] = 0;
    }
    for (int i = 0; i < ct_1; i++)
    {
        a[k++] = 1;
    }
    for (int i = 0; i < ct_2; i++)
    {
        a[k++] = 2;
    }
}

void sort2(int a[], int n)
{
    // Using 3 pointer approach that is
    // Dutch National Flag Algorithm
    // TC O(n) Space O(1)
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            mid++;
            low++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
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
    // sort1(a, n);
    sort2(a, n);
    print(a, n);
    return 0;
}