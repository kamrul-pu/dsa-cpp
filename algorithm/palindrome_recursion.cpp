#include <iostream>
using namespace std;

bool is_palindrome(string s)
{
    // check palindrome by loop
    int n = s.size();

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

bool isPalindrome(string s, int i, int n)
{
    if (i >= n / 2)
        return true;
    if (s[i] != s[n - i - 1])
        return false;
    return isPalindrome(s, i + 1, n);
}

int main()
{
    string s;
    cin >> s;
    cout << is_palindrome(s) << endl;
    cout << isPalindrome(s, 0, s.size()) << endl;
}