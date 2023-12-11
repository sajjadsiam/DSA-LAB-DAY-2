#include <iostream>

using namespace std;

struct ArrayInfo {
    int *arr;
    int size;
};

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

ArrayInfo createArray() {
    ArrayInfo arrayInfo;

    cout << "Enter the size of the array: ";
    cin >> arrayInfo.size;

    if (arrayInfo.size <= 0) {
        cout << "Array is empty." << endl;
        arrayInfo.arr = nullptr;
    } else {
        arrayInfo.arr = new int[arrayInfo.size];

        cout << "Enter elements: ";
        for (int i = 0; i < arrayInfo.size; i++) {
            cin >> arrayInfo.arr[i];
        }
    }

    return arrayInfo;
}

void displayArray(const ArrayInfo &arrayInfo) {
    cout << "Entered elements: ";
    for (int i = 0; i < arrayInfo.size; i++) {
        cout << arrayInfo.arr[i] << " ";
    }
    cout << endl;
}

int findMaxElementIndex(const ArrayInfo &arrayInfo) {
    int maxIndex = 0;

    for (int i = 1; i < arrayInfo.size; i++) {
        if (arrayInfo.arr[i] > arrayInfo.arr[maxIndex]) {
            maxIndex = i;
        }
    }

    return maxIndex;
}

int main() {
    ArrayInfo arrayInfo = createArray();

    if (arrayInfo.arr == nullptr) {
        return 0;
    }

    displayArray(arrayInfo);


    int maxIndex = findMaxElementIndex(arrayInfo);

    cout << "Maximum element: " << arrayInfo.arr[maxIndex] << " at index " << maxIndex << endl;

    delete[] arrayInfo.arr;

    return 0;
}
    
