#include <iostream>
#include <algorithm>

using namespace std;
bool cmp(int a, int b)
{
    return a > b;
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
    // sort in ascending order start to end pointer
    sort(arr, arr + n);
    for (auto val : arr)
        cout << val << " ";
    cout << endl;

    // sort in descending order
    sort(arr, arr + n, cmp);
    for (auto val : arr)
        cout << val << " ";
}