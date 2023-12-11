#include <iostream>

using namespace std;

int findMaxElement(const int *arr, int size) {
  
    if (size == 1) {
        return *arr;
    }

    int maxInRest = findMaxElement(arr + 1, size - 1);

    return (*arr > maxInRest) ? *arr : maxInRest;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array is empty." << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Entered elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int maxElement = findMaxElement(arr, n);

    cout << "\nMaximum element: " << maxElement << endl;

    return 0;
}
