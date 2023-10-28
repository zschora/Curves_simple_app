//
// Created by гиоргий on 28.10.2023.
//

#include "Ellipse.h"
#include "Vector3D.h"
#include <cmath>

Vector3D Ellipse::getPoint(double t) const {
    double x = big_radius * sin(t);
    double y = small_radius * cos(t);
    return {x, y, 0};
}

Vector3D Ellipse::getDerivative(double t) const {
    double x = -big_radius * cos(t);
    double y = small_radius * sin(t);
    return {x, y, 0};
}

Ellipse::Ellipse(double big_radius, double small_radius) {
    if (big_radius <= 0 or small_radius <= 0)
        throw std::invalid_argument("Radius must be positive");
    this->big_radius = big_radius;
    this->small_radius = small_radius;
}
