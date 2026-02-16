#include <iostream>
using namespace std;

int linearSearch(int *arr, int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;   // Return index if found
        }
    }
    return -1;  // Not found
}

int main() {
    int size, key;

    cout << "Enter number of elements: ";
    cin >> size;

    // Dynamic memory allocation
    int *arr = new int[size];

    cout << "Enter elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, size, key);

    if(result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found.";

    // Free allocated memory
    delete[] arr;

    return 0;
}
