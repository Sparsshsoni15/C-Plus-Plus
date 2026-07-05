#include <iostream>
using namespace std;

// Function to perform Counting Sort
void countingSort(int arr[], int n)
{
    // Find the maximum element in the array
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    // Create and initialize count array
    int count[max + 1] = {0};

    // Store frequency of each element
    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Reconstruct the sorted array
    int index = 0;
    for(int i = 0; i <= max; i++)
    {
        while(count[i] > 0)
        {
            arr[index] = i;   // Place element in array
            index++;
            count[i]--;       // Decrease frequency
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

    // Call Counting Sort function
    countingSort(arr, n);

    // Display sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}