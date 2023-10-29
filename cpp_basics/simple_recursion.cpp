#include <iostream>
using namespace std;

void func1(int i, int n)
{
    // print name 1 to n time
    if (i > n)
        return;
    cout << "Kamrul Hasan\n";
    func1(i + 1, n);
}

void func2(int i, int n)
{
    // print number i to n
    if (i > n)
        return;
    cout << i << " ";
    func2(i + 1, n);
}

void func3(int i, int n)
{
    // print number n to 1
    if (i > n)
        return;

    func3(i + 1, n);
    cout << i << " ";
}
int main()
{
    int n;
    cin >> n;
    // func1(1, 5);
    // func2(1, n);
    func3(1, n);
}