#include <iostream>
#include <queue>
using namespace std;

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.emplace(5);
    q.back() += 5;
    cout << q.back() << endl;
    cout << q.front() << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

void explainPQ()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    pq.emplace(15);

    cout << pq.top() << endl;
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
int main()
{
    int n;
    cin >> n;
    explainQueue();
    explainPQ();
}