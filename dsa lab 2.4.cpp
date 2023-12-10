#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "array size: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Entered elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int p;
    cout << "\nEnter the item to search for: ";
    cin >> p;

    int index = -1; 

    for (int i = 0; i < n; ++i) {
        if (p == arr[i]) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "ITEM is not in the array." << endl;
    } else {
        cout << "Location of ITEM: " << index + 1 << " (at index " << index << ")" << endl;
    }

    return 0;
}

