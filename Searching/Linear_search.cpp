#include <iostream>
using namespace std;

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

    int found = -1;  // Variable to store index if element is found

    // Traverse the array
    for(int i = 0; i < n; i++)
    {
        // Check if current element matches the key
        if(arr[i] == key)
        {
            found = i;  // Store index
            break;      // Exit loop after finding element
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