#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shift_zeros_to_right_brute_force(int arr[], int n)
{
    int temp[n];
    // store all non zero numbers to temp array
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }

    // put non zero number to the original arrary
    for (int i = 0; i <= count; i++)
    {
        arr[i] = temp[i];
    }
    // put zeros to the end of the array
    for (int i = count; i < n; i++)
    {
        arr[i] = 0;
    }
}

void shift_zeros_to_right_optimal(int arr[], int n)
{
    // find the first zero
    int j;
    for (j = 0; j < n; j++)
    {
        if (arr[j] == 0)
        {
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    print(a, n);

    // Shift zeros to the right side;
    shift_zeros_to_right_optimal(a, n);
    print(a, n);
    return 0;
}