#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

void explainMap()
{
    // ordered key value pair
    map<int, int> mp;
    mp[1] = 2;
    mp[3] = 5;
    mp.insert({2, 4});
    for (auto ele : mp)
        cout << "Key: " << ele.first << " val: " << ele.second << endl;

    map<int, pair<int, int>> mpp;
    mpp.insert({1, {2, 3}});
    mpp.insert({4, {5, 6}});
    for (auto ele : mpp)
        cout << "key: " << ele.first << " value: " << ele.second.first << " " << ele.second.second << endl;

    map<pair<int, int>, int> mp1;

    mp1.insert({{1, 2}, 3});
    mp1.insert({{4, 5}, 6});
    for (auto ele : mp1)
        cout << "key: " << ele.first.first << "," << ele.first.second << " value: " << ele.second << endl;

    auto it = mp.find(2);
    // cout << "Key: " << *(it).first << " val: " << *(it).second << endl;
}

void explainMultiMap()
{
    multimap<int, int> mp;
    mp.insert({1, 3});
    mp.insert({1, 5});
    mp.insert({2, 4});
}
void explainUnorderdMap()
{
    unordered_map<int, int> mp;
    mp.insert({2, 3});
}
int main()
{
    int n;
    cin >> n;
    explainMap();
}