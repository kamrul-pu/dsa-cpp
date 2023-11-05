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
    // In this case postive and negetive elements are not same
    int positive[n] = {0};
    int negetive[n] = {0};
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
    if (pos_index > neg_index)
    {
        for (int i = 0; i < neg_index; i++)
        {
            a[2 * i] = positive[i];
            a[2 * i + 1] = negetive[i];
        }
        int index = neg_index * 2;
        for (int i = neg_index; i < pos_index; i++)
        {
            a[index++] = positive[i];
        }
    }
    else
    {
        for (int i = 0; i < pos_index; i++)
        {
            a[2 * i] = positive[i];
            a[2 * i + 1] = negetive[i];
        }
        int index = pos_index * 2;
        for (int i = pos_index; i < neg_index; i++)
        {
            a[index++] = negetive[i];
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
    rearrange_array(a, n);
    print(a, n);
    return 0;
}