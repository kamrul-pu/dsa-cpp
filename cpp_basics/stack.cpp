#include <iostream>
#include <stack>
using namespace std;

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(6);
    st.emplace(5);
    cout << st.top() << endl;
    cout << st.empty() << endl;
    cout << st.size() << endl;

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{
    int n;
    cin >> n;
    explainStack();
}