#include <iostream>
using namespace std;

// Function to perform Binary Search
int binarySearch(int arr[], int n, int key)
{
    int low = 0;        // First index of array
    int high = n - 1;  // Last index of array

    // Repeat until search space becomes empty
    while(low <= high)
    {
        int mid = (low + high) / 2;  // Find middle index

        // Check if key is present at mid
        if(arr[mid] == key)
        {
            return mid;  // Return index if found
        }

        // If key is greater, search in right half
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }

        // If key is smaller, search in left half
        else
        {
            high = mid - 1;
        }
    }

    return -1;  // Return -1 if element is not found
}

int main()
{
    int n, key;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input sorted array elements
    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Input element to search
    cout << "Enter element to search: ";
    cin >> key;

    // Call Binary Search function
    int result = binarySearch(arr, n, key);

    // Display result
    if(result != -1)
    {
        cout << "Element found at position " << result + 1;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}