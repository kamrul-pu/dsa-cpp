#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        cout << "count of " << num << " : " << mp[num] << endl;
    }
}