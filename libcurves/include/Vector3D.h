//
// Created by гиоргий on 28.10.2023.
//

#ifndef CURVES_PROJ_VECTOR3D_H
#define CURVES_PROJ_VECTOR3D_H

#include <iostream>

class Vector3D {
public:
    Vector3D(double x, double y, double z);
    double getX() const;
    double getY() const;
    double getZ() const;
    double length() const;
    friend std::ostream& operator<<(std::ostream& os, const Vector3D& vec);


private:
    double x, y, z;
};

#endif //CURVES_PROJ_VECTOR3D_H
