#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
    // Traverse the entire array
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;  // Assume current element is the minimum

        // Find the index of the smallest element
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the smallest element with the current element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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

    // Call Selection Sort function
    selectionSort(arr, n);

    // Display sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}