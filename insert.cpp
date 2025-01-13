#include <iostream>
using namespace std;

void insertElement(int arr[], int &n, int x, int pos) {
    // Increase the size of the array by 1
    n++;
    // Shift elements to the right to make space for the new element
    for (int i = n - 1; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element
    arr[pos] = x;
}

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6}; // Increased size to 7 to accommodate one more element
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x = 10; // Element to be inserted
    int pos = 3; // Position where the element will be inserted (0-indexed)

    insertElement(arr, len, x, pos);

    cout << "Array after insertion: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
