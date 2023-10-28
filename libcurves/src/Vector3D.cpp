#include "Vector3D.h"
#include <cmath>
#include <iostream>

Vector3D::Vector3D(double x, double y, double z)
        : x(x), y(y), z(z) {}

double Vector3D::getX() const {
    return x;
}

double Vector3D::getY() const {
    return y;
}

double Vector3D::getZ() const {
    return z;
}

double Vector3D::length() const {
    return std::sqrt(x*x + y*y + z*z);
}

std::ostream &operator<<(std::ostream &os, const Vector3D &vec) {
    os << "(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
    return os;
}

