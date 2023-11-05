#include <bits/stdc++.h>
#include <vector>
using namespace std;

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
vector<int> find_leaders(vector<int> &a, int n)
{
    vector<int> leaders;
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                leader = false;
                break;
            }
        }
        if (leader)
        {
            leaders.push_back(a[i]);
        }
    }
    return leaders;
}

vector<int> find_leaders1(vector<int> &a, int n)
{
    vector<int> ans;
    int mx = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > mx)
        {
            ans.push_back(a[i]);
        }
        mx = max(mx, a[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    print(a, n);
    vector<int> leaders = find_leaders(a, n);
    print(leaders, leaders.size());
    vector<int> ans = find_leaders1(a, n);
    print(ans, ans.size());
    return 0;
}