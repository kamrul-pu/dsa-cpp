#include <iostream>
#include <set>
#include <vector>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> union_two_sorted_array(int arr1[], int arr2[], int n1, int n2)
{
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }
    vector<int> arr;
    for (auto val : st)
    {
        arr.push_back(val);
    }
    return arr;
}

vector<int> union_array(int a1[], int a2[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    vector<int> unionArray;
    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != a1[i])
            {
                unionArray.push_back(a1[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != a2[j])
            {
                unionArray.push_back(a2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionArray.size() == 0 || unionArray.back() != a1[i])
        {
            unionArray.push_back(a1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionArray.size() == 0 || unionArray.back() != a2[j])
        {
            unionArray.push_back(a2[j]);
        }
        j++;
    }
    return unionArray;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    int b[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    vector<int> arr = union_array(a, b, n1, n2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
