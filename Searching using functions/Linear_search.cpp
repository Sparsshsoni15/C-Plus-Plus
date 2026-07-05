#include <iostream>
using namespace std;

// Function to perform Linear Search
int linearSearch(int arr[], int n, int key)
{
    // Traverse the array one by one
    for(int i = 0; i < n; i++)
    {
        // Check if current element matches the key
        if(arr[i] == key)
        {
            return i;  // Return index if element is found
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

    // Input array elements
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Input element to search
    cout << "Enter element to search: ";
    cin >> key;

    // Call Linear Search function
    int result = linearSearch(arr, n, key);

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