//
// Created by гиоргий on 28.10.2023.
//

#ifndef VECTOR3D_H_ELLIPS_H
#define VECTOR3D_H_ELLIPS_H

#include "Curve.h"
#include "Vector3D.h"

class Ellips : public Curve {
public:
    Ellips(double big_radius, double small_radius) :
        big_radius(big_radius),
        small_radius(small_radius) {}

    Vector3D getPoint(double t) const override;
    Vector3D getDerivative(double t) const override;

private:
    double big_radius, small_radius;
};


#endif //VECTOR3D_H_ELLIPS_H
