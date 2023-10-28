//
// Created by гиоргий on 29.10.2023.
//

#ifndef VECTOR3D_H_HELIX_H
#define VECTOR3D_H_HELIX_H

#include "Curve.h"
#include "Vector3D.h"

class Helix : public Curve {
public:
    Helix(double radius, double step) : radius(radius), step(step) {}
    Vector3D getPoint(double t) const override;
    Vector3D getDerivative(double t) const override;

private:
    double radius, step;


};


#endif //VECTOR3D_H_HELIX_H
