#include <iostream>
using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int mn_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mn_index])
                mn_index = j;
        }
        // swap with minimum index
        swap(arr[i], arr[mn_index]);
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void insertionSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int hole = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > hole)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = hole;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // selectionSort(arr, n);
    // bubbleSort(arr, n);
    insertionSort(arr, n);
    print(arr, n);
}