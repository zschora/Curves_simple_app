#include <iostream>
#include "Vector3D.h"
#include "Circle.h"

int main() {
    Vector3D v(1, 2, 3);
    std::cout << "Length: " << v.length();
    return 0;
}
