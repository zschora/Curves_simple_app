//
// Created by гиоргий on 28.10.2023.
//

#ifndef CURVES_PROJ_CURVE_H
#define CURVES_PROJ_CURVE_H

#include "Vector3D.h"

class Curve {
public:
    virtual Vector3D getPoint() const = 0;
    virtual Vector3D getDerivative() const = 0;
};


#endif //CURVES_PROJ_CURVE_H
