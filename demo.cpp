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

void markCol(int j, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i][j] = -1;
    }
}

void markZeros(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == -1)
            {
                a[i][j] = 0;
            }
        }
    }
}

void set_matrix_zeros(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                markRow(i, m);
                markCol(j, n);
            }
        }
    }
    markZeros(n, m);
}
void mark_row_col(int row[], int col[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    // make the row and column zero
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                a[i][j] = 0;
            }
        }
    }
}

void mark_zero_optimal(int n, int m)
{
    int col0 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                // mark the ith row
                a[i][0] = 0;
                // mark the jth col
                if (j != 0)
                    a[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (a[i][j] != 0)
            {
                // check for col & row
                if (a[0][j] == 0 || a[i][0] == 0)
                {
                    a[i][j] = 0;
                }
            }
        }
    }
    if (a[0][0] = 0)
    {
        for (int j = 0; j < m; j++)
        {
            a[0][j];
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            a[i][0] = 0;
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
    // set_matrix_zeros(n, m);
    // mark_row_col(row, col, n, m);
    mark_zero_optimal(n, m);
    print(n, m);
    return 0;
}