//
// Created by kuhn- on 26.11.2022.
//

#include "Vector.h"

namespace math{
    Vector::Vector(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = 0.0f;
    }

    Vector operator+(const Vector &v1, const Vector &v2) {
        return {v1.x+v2.x, v1.y+v2.y, v1.z+v2.z};
    }
}
