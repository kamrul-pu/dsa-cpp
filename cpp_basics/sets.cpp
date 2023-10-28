#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

void explainSet()
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);
    // Functionality of insert in vector
    // can be used also, that only increase efficiency
    // begin(), end(), , rbegin(), rend(), size().
    // empty() and swap are same as those of above

    auto it = st.find(3);
    auto it = st.find(6);

    // erase
    st.erase(2);

    int cnt = st.count(1); // result 0 if not available else one cause unique
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);
    int cnt = ms.count(1);
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(2));
}
void explainUnorderedSet()
{
    unordered_set<int> st;
    st.insert(10);
    st.insert(20);
    // exact same like set but no ordering store random order
    // functionality are same as sort only upper and lower bound do not work
}
void explainUnorderedMultiSet()
{
    unordered_multiset<int> st;
    st.insert(3);
    st.insert(4);
    st.insert(3);
    // allows duplicate unsorted set
}
int main()
{
    int n;
    cin >> n;
    explainSet();
}