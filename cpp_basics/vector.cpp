#include <iostream>
#include <vector>
#include <list>
using namespace std;

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(2, 3);
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i].first << " " << vec[i].second << "\n";

    // vector of 5 element value 100
    vector<int> v1(5, 100);
    // vector size 5
    vector<int> v2(5);
    vector<int> v3(5, 200);
    vector<int> v4(v1);
    cout << v.back() << endl;
    // iterator of vector<int> to the first address of that array vector;
    vector<int>::iterator it = v.begin(); // pointer to the next address of last element
    // vector<int>::iterator it = v.rend();   // reverse end
    // vector<int>::iterator it = v.rbegin(); // reverse begin
    it++;
    cout << *(it) << endl;

    for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
        cout << *(it) << endl;

    // autometic iterator
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *(it) << endl;
    cout << *(v.begin()) << endl;
    for (auto it : v1)
        cout << it << " ";

    // erase the vector
    // delete second element
    v.erase(v.begin() + 1);
    // delete range element start address and end , end=end+1
    v.erase(v.begin() + 1, v.begin() + 3);
    // inserts
    vector<int> v5(2, 100);           //[100,100]
    v4.insert(v4.begin(), 300);       //[300,100,100]
    v4.insert(v4.begin() + 1, 2, 10); //[300,10,10,100,100]

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end()); //[50,50,300,10,10,100,100]
    v.pop_back();                                  // delete the last element
    v1.swap(v2);
    v.clear();
    cout << v.empty() << endl;
}

void explainList()
{
    // list is like vector but there has more functionality than vector
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.emplace_front(5);
    for (auto val : ls)
        cout << val << endl;

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}
int main()
{
    int n;
    cin >> n;
    explainList();
}