#include <iostream>
#include <cmath>
#include <complex>

int main() {
    double a, b, c;

    std::cout << "Enter coefficient a: ";
    std::cin >> a;
    std::cout << "Enter coefficient b: ";
    std::cin >> b;
    std::cout << "Enter coefficient c: ";
    std::cin >> c;

    // Calculate the discriminant
    double discriminant = b*b - 4*a*c;

    // Check the value of the discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        double root1 = (-b + std::sqrt(discriminant)) / (2*a);
        double root2 = (-b - std::sqrt(discriminant)) / (2*a);
        std::cout << "Two distinct real roots:" << std::endl;
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    }
    else if (discriminant == 0) {
        // One repeated real root
        double root = -b / (2*a);
        std::cout << "One repeated real root:" << std::endl;
        std::cout << "Root = " << root << std::endl;
    }
    else {
        // Complex roots
        std::complex<double> root1 = (-b + std::sqrt(std::complex<double>(discriminant))) / (2.0*a);
        std::complex<double> root2 = (-b - std::sqrt(std::complex<double>(discriminant))) / (2.0*a);
        std::cout << "Two complex roots:" << std::endl;
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    }

    return 0;
}