#include <iostream>
using namespace std;

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

    int low = 0;        // First index of array
    int high = n - 1;  // Last index of array
    int found = -1;    // Variable to store index if found

    // Binary Search
    while(low <= high)
    {
        int mid = (low + high) / 2;  // Find middle index

        // Check if element is found
        if(arr[mid] == key)
        {
            found = mid;
            break;
        }

        // Search in right half
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }

        // Search in left half
        else
        {
            high = mid - 1;
        }
    }

    // Display result
    if(found != -1)
    {
        cout << "Element found at position " << found + 1;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}