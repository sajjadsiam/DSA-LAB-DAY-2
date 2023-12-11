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
    
    int i = 0;
    cout << "Enter elements: ";
    while (i < n) {
        cin >> arr[i];
        i++;
    }

    cout << "Entered elements: ";
    i = 0;
    while (i < n) {
        cout << arr[i] << " ";
        i++;
    }

    int* ptr = arr; 
    int maxElement = *ptr; 
    int maxIndex = 0;

    i = 1;
    while (i < n) {
        if (*ptr < arr[i]) {
            maxElement = arr[i];
            maxIndex = i;
        }
        i++;
    }

    cout << "\nMaximum element: " << maxElement << " at index " << maxIndex << endl;

    return 0;
}
