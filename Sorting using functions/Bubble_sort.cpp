#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n)
{
    // Traverse through all array elements
    for(int i = 0; i < n - 1; i++)
    {
        // Last i elements are already sorted
        for(int j = 0; j < n - i - 1; j++)
        {
            // Compare adjacent elements
            if(arr[j] > arr[j + 1])
            {
                // Swap if they are in wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

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

    // Call Bubble Sort function
    bubbleSort(arr, n);

    // Display sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}