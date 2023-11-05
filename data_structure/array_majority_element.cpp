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

int majority_element1(int a[], int n)
{
    // TC - O(n^2)
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
        if (ct > (n / 2))
            return a[i];
    }
    return -1;
}
int majority_element2(int a[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > (n / 2))
        {
            return it.first;
        }
    }
    return -1;
}

int majority_element3(int a[], int n)
{
    // Moores voting algorithm
    int ct = 0;
    int el;
    for (int i = 0; i < n; i++)
    {
        if (ct == 0)
        {
            ct = 1;
            el = a[i];
        }
        else if (a[i] == el)
        {
            ct++;
        }
        else
        {
            ct--;
        }
    }
    int ct1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == el)
            ct1++;
    }
    if (ct1 > (n / 2))
        return el;
    return -1;
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
    // cout << majority_element1(a, n) << endl;
    cout << majority_element2(a, n) << endl;
    return 0;
}