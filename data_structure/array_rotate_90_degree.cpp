#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
const int N = 101;
int a[N][N];
int ans[N][N];

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void rotate_matrix(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n - i - 1] = a[i][j];
        }
    }
}

void rotate_matrix_optimized(int n)
{
    // First step: make the transpose of the matrix
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    // reverse every row
    for (int i = 0; i < n; i++)
    {
        reverse(a[i], a[i] + n);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    print(n);
    // rotate_matrix(n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    rotate_matrix_optimized(n);
    print(n);
    return 0;
}
