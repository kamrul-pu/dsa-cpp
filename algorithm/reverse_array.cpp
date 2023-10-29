#include <iostream>
using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void reverseUsingLoop(int a[], int n)
{
    int hi = n - 1;
    int lo = 0;
    while (lo < hi)
    {
        swap(a[lo], a[hi]);
        lo++;
        hi--;
    }
}

void reverseRecursion(int a[], int lo, int hi)
{
    if (lo >= hi)
        return;
    swap(a[lo], a[hi]);
    reverseRecursion(a, lo + 1, hi - 1);
}

void reverse_single_pointer(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

void reverse_single_recursion(int a[], int i, int n)
{
    if (i >= n / 2)
        return;
    swap(a[i], a[n - i - 1]);
    reverse_single_recursion(a, i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseUsingLoop(arr, n);
    print(arr, n);

    reverseRecursion(arr, 0, n - 1);
    print(arr, n);

    reverse_single_pointer(arr, n);
    print(arr, n);

    reverse_single_recursion(arr, 0, n);
    print(arr, n);
}