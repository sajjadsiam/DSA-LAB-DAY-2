#include <iostream>

using namespace std;

struct MaxInfo {
    int element;
    int index;
};

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
    
    MaxInfo maxData;
    maxData.element = arr[0];
    maxData.index = 0;
    
    for (int i = 0; i < n; i++) {
        if (maxData.element < arr[i]) {
            maxData.element = arr[i];
            maxData.index = i;
        }
    }
    
    cout << "\nMaximum element: " << maxData.element << " at index " << maxData.index << endl;
    
    return 0;
}
