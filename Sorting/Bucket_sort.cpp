#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    float arr[n];

    cout << "Enter array elements (0 to 1): ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Create buckets
    vector<float> bucket[n];

    // Put elements into buckets
    for(int i = 0; i < n; i++) {

        int index = n * arr[i];
        bucket[index].push_back(arr[i]);
    }

    // Sort individual buckets
    for(int i = 0; i < n; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }

    // Merge buckets
    int k = 0;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < bucket[i].size(); j++) {

            arr[k] = bucket[i][j];
            k++;
        }
    }

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}