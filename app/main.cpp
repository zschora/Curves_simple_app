#include <iostream>
#include <cmath>
#include "Vector3D.h"
#include "Circle.h"
#include "Ellips.h"

int main() {
    Vector3D v(1, 2, 3);
    Circle c(1);
    std::cout << "Length: " << v.length();
    std::cout << "\nPoint: ";
    std::cout << c.getPoint(M_PI/4);
    std::cout << "\nDerivative: ";
    std::cout << c.getDerivative(M_PI/4);
    Ellips el(1, 2);
    std::cout << "\nPoint: ";
    std::cout << el.getPoint(M_PI/4);
    std::cout << "\nDerivative: ";
    std::cout << el.getDerivative(M_PI/4);
    return 0;
}
