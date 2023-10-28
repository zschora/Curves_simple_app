//
// Created by гиоргий on 28.10.2023.
//

#ifndef VECTOR3D_H_ELLIPSE_H
#define VECTOR3D_H_ELLIPSE_H

#include "Curve.h"
#include "Vector3D.h"

class Ellipse : public Curve {
public:
    Ellipse(double big_radius, double small_radius);

    Vector3D getPoint(double t) const override;
    Vector3D getDerivative(double t) const override;

private:
    double big_radius, small_radius;
};


#endif //VECTOR3D_H_ELLIPSE_H
