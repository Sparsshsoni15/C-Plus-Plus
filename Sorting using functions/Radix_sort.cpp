#include <iostream>
using namespace std;

// Function to find the largest element
int getMax(int arr[], int n)
{
    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

// Function to perform Counting Sort according to current digit
void countingSort(int arr[], int n, int exp)
{
    int output[n];
    int count[10] = {0};

    // Count occurrences of digits
    for(int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Store cumulative count
    for(int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array
    for(int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy output to original array
    for(int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Main Radix Sort function
void radixSort(int arr[], int n)
{
    int max = getMax(arr, n);

    for(int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    radixSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}