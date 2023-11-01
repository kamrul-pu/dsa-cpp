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

int find_missing(int a[], int n)
{
    // Brute force solution
    // T O(n^2) S O(1)
    int i = 1;
    for (i; i <= n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] == i)
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            return i;
        }
    }
    return -1;
}

int find_missing1(int a[], int n)
{
    // TC = O(n) Space O(1) / O(n) if  hash is stored separately
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
            return i;
    }
    return -1;
}

int find_missing2(int a[], int n)
{
    // Using Sum;
    int expected_sum = (n * (n + 1) / 2);
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += a[i];
    }
    return expected_sum - sum;
}

int find_missing3(int a[], int n)
{
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        xor2 ^= a[i];
        xor1 ^= (i + 1);
    }
    xor1 ^= n;
    return xor1 ^ xor2;
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
    cout << find_missing2(a, n) << endl;
    cout << find_missing3(a, n) << endl;

    return 0;
}
