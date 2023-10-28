//
// Created by гиоргий on 28.10.2023.
//

#include "Circle.h"
#include <cmath>


Vector3D Circle::getPoint(double t) const {
    double x = radius * cos(t);
    double y = radius * sin(t);
    return {x, y, 0};
}

Vector3D Circle::getDerivative(double t) const {
    double x = -radius * sin(t);
    double y = radius * cos(t);
    return {x, y, 0};
}
