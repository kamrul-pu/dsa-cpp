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

int find_number_appears_once(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ct = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                ct++;
            }
        }
        if (ct == 1)
        {

            return a[i];
        }
    }
    return -1;
}

int find_number_appears_once1(int a[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res ^= a[i];
    }
    return res;
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
    cout << find_number_appears_once(a, n) << endl;
    cout << find_number_appears_once1(a, n) << endl;
    return 0;
}
