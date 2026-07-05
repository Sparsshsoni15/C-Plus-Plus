#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int n)
{
    vector<float> bucket[n];

    // Put elements into buckets
    for(int i = 0; i < n; i++)
    {
        int index = n * arr[i];
        bucket[index].push_back(arr[i]);
    }

    // Sort individual buckets
    for(int i = 0; i < n; i++)
    {
        sort(bucket[i].begin(), bucket[i].end());
    }

    // Merge buckets into original array
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < bucket[i].size(); j++)
        {
            arr[k] = bucket[i][j];
            k++;
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    float arr[n];

    cout << "Enter elements (between 0 and 1): ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}