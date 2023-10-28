#include <iostream>
#include "Vector3D.h"
#include "Circle.h"
#include <cmath>

int main() {
    Vector3D v(1, 2, 3);
    Circle c(1);
    std::cout << "Length: " << v.length();
    std::cout << "\nPoint: ";
    std::cout << c.getPoint(M_PI/4);
    std::cout << "\nDerivative: ";
    std::cout << c.getDerivative(M_PI/4);
    return 0;
}
