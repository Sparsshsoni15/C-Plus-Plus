#include <iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub) {
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int temp[100]; 
    while (i <= mid && j <= ub) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= ub) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int idx = lb; idx <= ub; idx++) {
        arr[idx] = temp[idx];
    }
}

void mergesort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;

        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);

        merge(arr, lb, mid, ub);
    }
}

int main() {
    int arr[] = {1, 3, 16, 10, 20, 15, 5, 24, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}