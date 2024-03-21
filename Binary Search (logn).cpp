/*
#include <iostream>
#include <chrono>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

            // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // If we reach here, then element was not present
    return -1;
}


int main(void)
{
    int arr[] = { 0, 1, 2, 3, 4};
    int x = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    auto start = chrono::high_resolution_clock::now(); // Start measuring time
    int result = binarySearch(arr, 0, n - 1, x);
    auto end = chrono::high_resolution_clock::now();   // Stop measuring time

    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;

    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start); // Calculate duration in nanoseconds
    cout << "\nTime taken: " << duration.count() << " nanoseconds" << endl;

    return 0;
}
 */