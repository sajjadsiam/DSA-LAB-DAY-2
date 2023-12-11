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
    do {
        cin >> arr[i];
        i++;
    } while (i < n);

    cout << "Entered elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int* ptr = arr; 
    int maxElement = *ptr; 
    int maxIndex = 0;

    i = 1;
    do {
        if (*ptr < arr[i]) {
            maxElement = arr[i];
            maxIndex = i;
        }
        i++;
    } while (i < n);

    cout << "\nMaximum element: " << maxElement << " at index " << maxIndex << endl;

    return 0;
}

