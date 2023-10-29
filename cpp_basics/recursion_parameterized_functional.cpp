#include <iostream>
using namespace std;

void func1(int i, int sum)
{
    // Sum with parameter
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    func1(i - 1, sum + i);
}

int func2(int i)
{
    // Functional sum function will return the answer
    if (i == 0)
        return 0;
    return i + func2(i - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << func2(n);
}