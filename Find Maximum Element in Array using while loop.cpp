#include <iostream>

using namespace std;

int main() {
    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Array is empty." << endl;
        return 0;
    }
    
    int arr[n];
    
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Entered elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    int i = 0;
    int maxElement = arr[0];
    int maxIndex = 0;

    while (i < n - 1) {
        if (maxElement < arr[i + 1]) {
            maxElement = arr[i + 1];
            maxIndex = i + 1;
        }
        i++;
    }

    cout << "\nMaximum element: " << maxElement << " at index " << maxIndex << endl;
    
    return 0;
}
