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

void left_rotate_one(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void left_rotation(int arr[], int n, int d)
{
    // Complexity O(n) Space O(d)
    //  d = d % n cause n=d back to the same place
    d = d % n;
    int temp[d];
    // store the 0 to d th element to temp array
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    // Shifting
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    // put back temporary
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

void left_rotate_using_reverse(int a[], int n, int d)
{
    // Tc = O(2n); Space O(1)
    d = d % n;
    reverse(a, a + d);
    reverse(a + d, a + n);
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
    // left_rotate_one(a, n);
    int d;
    cin >> d;
    // left_rotation(a, n, d);
    // print(a, n);
    left_rotate_using_reverse(a, n, d);
    print(a, n);
    return 0;
}