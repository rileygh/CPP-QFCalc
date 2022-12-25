#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    double root1, root2;
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        // Real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "The roots are " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        // One real root
        root1 = -b / (2*a);
        cout << "The root is " << root1 << endl;
    } else {
        // Complex roots
        double real = -b / (2*a);
        double imag = sqrt(-discriminant) / (2*a);
        cout << "The roots are " << real << " + " << imag << "i and " << real << " - " << imag << "i" << endl;
    }

    return 0;
}