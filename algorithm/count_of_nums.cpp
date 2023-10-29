#include <iostream>
using namespace std;
const int N = 1e3 + 10;
int count[N];

int main()
{
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        count[x]++;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        cout << "count of " << num << " : " << count[num] << endl;
    }
}