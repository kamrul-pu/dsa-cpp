#include <bits/stdc++.h>
#include <map>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void rearrange_array(int a[], int n)
{
    // there will be n/2 positive and n/2 negetive numbers
    // TC O(2n) Space O(n) extra space
    int positive[n / 2];
    int negetive[n / 2];
    int pos_index = 0;
    int neg_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            negetive[neg_index++] = a[i];
        }
        else
        {
            positive[pos_index++] = a[i];
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        a[2 * i] = positive[i];
        a[2 * i + 1] = negetive[i];
    }
}

void rearrange_array1(int a[], int n, int result[])
{
    // TC O(n) Space O(n)
    int pos_ind = 0, neg_ind = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            result[pos_ind] = a[i];
            pos_ind += 2;
        }
        else
        {
            result[neg_ind] = a[i];
            neg_ind += 2;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int result[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    print(a, n);
    // rearrange_array(a, n);
    rearrange_array1(a, n, result);
    print(result, n);
    return 0;
}