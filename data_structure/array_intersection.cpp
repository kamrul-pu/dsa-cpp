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

vector<int> array_intersaction(int a1[], int a2[], int n1, int n2)
{
    vector<int> intersect_arr;
    int visited[n2] = {0};

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a1[i] == a2[j] && visited[j] == 0)
            {
                intersect_arr.push_back(a1[i]);
                visited[j] = 1;
            }
        }
    }
    return intersect_arr;
}

vector<int> array_intersaction_optimal(int a1[], int a2[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
        {
            i++;
        }
        else if (a2[j] < a1[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a1[i]);
            i++;
            j++;
        }
    }
    return ans;
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

    vector<int> arr = array_intersaction_optimal(a, b, n1, n2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
