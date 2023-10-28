#include <iostream>
#include <algorithm>
#include <utility>

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
    cout << endl;
    int num = 7;
    int ct = __builtin_popcount(7);
    cout << ct << endl;
    long long n1 = 2356746346346;
    int count = __builtin_popcountll(n1);
    cout << count << endl;
    cout << __builtin_popcountll(-2) << endl;
    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(arr, arr + n);
    cout << maxi << endl;
}