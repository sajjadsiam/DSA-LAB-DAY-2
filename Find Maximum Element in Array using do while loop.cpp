
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
    
    cout << "Enter elements: ";
    
    int i = 0;
    do {
        cin >> arr[i];
        i++;
    } while (i < n);
    
    cout << "Entered elements: ";
    
    int j = 0;
    do {
        cout << arr[j] << " ";
        j++;
    } while (j < n);
    
    int maxElement = arr[0];
    int maxIndex = 0;
    
    int k = 1; 
    do {
        if (maxElement < arr[k]) {
            maxElement = arr[k];
            maxIndex = k;
        }
        k++;
    } while (k < n);
    
    cout << "\nMaximum element: " << maxElement << " at index " << maxIndex << endl;
    
    return 0;
}
