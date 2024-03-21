/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;
using namespace chrono;
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    const int size = 1000;
    int arr[size];
    srand(time(nullptr)); // Seed for random number generator
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 10000; // Generate random numbers between 0 and 9999
    }

    auto start = high_resolution_clock::now();

    bubbleSort(arr, size);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "Sorted array: \n";
    printArray(arr, size);
    cout << "Time taken: " << duration.count() << " nanoseconds" << endl;
    return 0;
}
 */