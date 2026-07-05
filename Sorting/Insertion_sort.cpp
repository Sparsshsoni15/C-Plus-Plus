#include <iostream>
using namespace std;

int main()
{
    int n;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];  // Element to be inserted
        int j = i - 1;

        // Move elements greater than key one position ahead
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at its correct position
        arr[j + 1] = key;
    }

    // Display sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}