#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int linear_search(int arr[], int n, int to_find)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == to_find)
            return i;
    }
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
    cout << linear_search(a, n, 10);
    return 0;
}