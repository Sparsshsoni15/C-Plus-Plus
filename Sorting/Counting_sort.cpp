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

    // Count array
    int count[max + 1] = {0};

    // Store frequency
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Print sorted array
    cout << "Sorted array: ";

    for(int i = 0; i <= max; i++) {

        while(count[i] > 0) {
            cout << i << " ";
            count[i]--;
        }
    }

    return 0;
}