#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second;
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {5, 1}};
    cout << arr[1].second;
}