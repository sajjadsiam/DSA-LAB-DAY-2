# C++ Array Operations

This repository contains C++ programs that demonstrate various array operations. Each program focuses on a specific operation, providing clear examples for learning and reference.

## Programs:

### 1. Find Maximum Element in Array using for loop
- **Overview:** This program takes user input to create an array, displays the entered elements, and finds the maximum element along with its index in the array.

```cpp
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


```

### 2. Quadratic Equation Solver
- **Overview:** This C++ program solves quadratic equations of the form ax^2 + bx + c = 0 and determines the roots based on the discriminant.

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, x1, x2, x;
    
 
    cout << "Enter coefficients (a, b, c): ";
    cin >> a >> b >> c;
  
    d = (b * b - 4 * a * c);

    if (d < 0) {
        cout << "No real solutions";
    }
    else if (d > 0) {
  
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1: " << x1 << "    " << "x2: " << x2 << endl;
    }
    else {
        x = (-b / (2 * a));
        cout << "x: " << x << endl;
    }

    return 0;
}
```

### 3. Find Maximum Element in Array using while loop

- **Overview:** This program takes user input to create an array, displays the entered elements, and finds the maximum element along with its index in the array.

```cpp
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
``` 

### 4. Find Maximum Element in Array using do while loop

- **Overview:** This program takes user input to create an array, displays the entered elements, and finds the minimum element along with its index in the array.


```cpp

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

```

### 5. Find Maximum Element in Array using structure and for loop

- **Overview:** This program takes user input to create an array, displays the entered elements, and finds the maximum element along with its index in the array.

```cpp
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

```

### 6. Find Maximum Element in Array using sorting function

- **Overview:** This program takes user input to create an array, displays the entered elements, and finds the maximum element along with its index in the array.

```cpp
#include <iostream>

using namespace std;

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
    
    
    Sort(arr, n);
    
    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    int maxElement = arr[n - 1];
    int maxIndex = n - 1;
    
    cout << "\nMaximum element: " << maxElement << " at index " << maxIndex << endl;
    
    return 0;
}

```

### 7. Find Maximum Element in Array using pointers and for loop

- **Overview:** This program takes user input to create an array, displays the entered elements, and finds the maximum element along with its index in the array.

```cpp
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

    int* ptr = arr; 
    int maxElement = *ptr; 
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (*ptr < arr[i]) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    cout << "\nMaximum element: " << maxElement << " at index " << maxIndex << endl;

    return 0;
}

```

### 8. Find Maximum Element in Array using pointers and do while loop

- **Overview:** This program takes user input to create an array, displays the entered elements, and finds the maximum element along with its index in the array.

```cpp
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


```

### 9. Find Maximum Element in Array using pointers and while loop

- **Overview:** This program takes user input to create an array, displays the entered elements, and finds the maximum element along with its index in the array.

```cpp
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

```




