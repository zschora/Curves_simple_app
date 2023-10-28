//
// Created by гиоргий on 28.10.2023.
//

#include "Ellips.h"
#include "Vector3D.h"
#include <cmath>

Vector3D Ellips::getPoint(double t) const {
    double x = big_radius * sin(t);
    double y = small_radius * cos(t);
    return {x, y, 0};
}

Vector3D Ellips::getDerivative(double t) const {
    double x = -big_radius * cos(t);
    double y = small_radius * sin(t);
    return {x, y, 0};
}
