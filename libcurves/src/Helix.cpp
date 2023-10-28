//
// Created by гиоргий on 29.10.2023.
//

#include "Helix.h"
#include "Vector3D.h"
#include <cmath>

Vector3D Helix::getPoint(double t) const {
    double x = radius * cos(t);
    double y = radius * sin(t);
    double z = step * (t / 2 / M_PI);
    return {x, y, z};
}

Vector3D Helix::getDerivative(double t) const {
    double x = -radius * sin(t);
    double y = radius * cos(t);
    double z = step / 2 / M_PI;
    return {x, y, z};
}
