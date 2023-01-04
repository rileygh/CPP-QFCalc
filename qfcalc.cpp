#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;
    std::cout << "Enter the value of c: ";
    std::cin >> c;

    double root1, root2;
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        // Real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        std::cout << "The roots are " << root1 << " and " << root2 << std::endl;
    } else if (discriminant == 0) {
        // One real root
        root1 = -b / (2*a);
        std::cout << "The root is " << root1 << std::endl;
    } else {
        // Complex roots
        double real = -b / (2*a);
        double imag = sqrt(-discriminant) / (2*a);
        std::cout << "The roots are " << real << " + " << imag << "i and " << real << " - " << imag << "i" << std::endl;
    }

    return 0;
}
