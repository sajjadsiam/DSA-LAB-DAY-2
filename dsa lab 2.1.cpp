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
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Entered elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    if (n == 1) {
        cout << "\nMaximum element: " << arr[0] << " at index 0";
        return 0;
    }

    int maxElement = arr[0];
    int maxIndex = 0;
    
    for (int i = 0; i < n - 1; i++) {
        if (maxElement < arr[i + 1]) {
            maxElement = arr[i + 1];
            maxIndex = i + 1;
        }
    }
   
    cout << "\nMaximum element: " << maxElement << " at index " << maxIndex;
    
    return 0;
}
