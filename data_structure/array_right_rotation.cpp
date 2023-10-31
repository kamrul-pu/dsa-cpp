#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void right_rotate_one(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}

void right_rotation(int arr[], int n, int d)
{
    // Complexity O(n) Space O(d)
    //  d = d % n cause n=d back to the same place
    d = d % n;
    // store the n-d to n value to temp array
    int temp[d];
    for (int i = n - d; i < n; i++)
    {
        temp[i - (n - d)] = arr[i];
    }
    // shifting
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - d];
    }
    // Put back temps values
    for (int i = 0; i < d; i++)
    {
        arr[i] = temp[i];
    }
}

void righ_rotate_using_reverse(int a[], int n, int d)
{
    // Tc = O(2n); Space O(1)
    d = d % n;
    reverse(a + (n - d), a + n);
    reverse(a, a + (n - d));
    reverse(a, a + n);
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
    // right_rotate_one(a, n);
    int d;
    cin >> d;
    // right_rotation(a, n, d);
    righ_rotate_using_reverse(a, n, d);
    print(a, n);
    return 0;
}