#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find maximum element
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Radix Sort
    for(int exp = 1; max / exp > 0; exp *= 10) {

        int output[n];
        int count[10] = {0};

        // Store count
        for(int i = 0; i < n; i++) {
            count[(arr[i] / exp) % 10]++;
        }

        // Update count array
        for(int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        // Build output array
        for(int i = n - 1; i >= 0; i--) {

            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        // Copy output to original array
        for(int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}