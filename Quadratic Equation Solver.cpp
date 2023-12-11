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
