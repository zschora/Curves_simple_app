//
// Created by гиоргий on 28.10.2023.
//

#ifndef VECTOR3D_H_CIRCLE_H
#define VECTOR3D_H_CIRCLE_H

#include "Curve.h"
#include "Vector3D.h"


class Circle : public Curve {
public:
    Circle(double radius) : radius(radius) {}
    Vector3D getPoint(double t) const override;
    Vector3D getDerivative(double t) const override;
    double getRadius() const;
private:
    double radius;
};


#endif //VECTOR3D_H_CIRCLE_H
