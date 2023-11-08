#include <bits/stdc++.h>
#include <vector>
#include <unordered_set>
using namespace std;
const int N = 100;
int a[N][N];

void print(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void markRow(int i, int m)
{
    for (int j = 0; j < m; j++)
    {
        a[i][j] = -1;
    }
}

void spiral_matrix(int n, int m)
{
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    while (top <= bottom && left <= right)
    {
        // left to right
        for (int i = left; i <= right; i++)
        {
            cout << a[top][i] << " ";
        }
        top++;
        // top  to bottom
        for (int i = top; i <= bottom; i++)
        {
            cout << a[i][right] << " ";
        }
        right--;
        // right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << a[bottom][i] << " ";
            }
            bottom--;
        }
        // bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << a[i][left] << " ";
            }
            left++;
        }
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
    int col[m] = {0}, row[n] = {0};
    print(n, m);
    spiral_matrix(n, m);
    return 0;
}