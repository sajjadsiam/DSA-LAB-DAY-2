#include <iostream>

using namespace std;

int main() {
    
    int n;
    cout << "array size: ";
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
    
    int maxElement = arr[0];
    int maxIndex = 0;
    
    for (int i = 0; i < n; i++) {
        if (maxElement < arr[i]) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    
    cout << "\nMaximum element: " << maxElement << " at index " << maxIndex << endl;
    
    return 0;
}
