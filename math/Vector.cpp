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

    void Vector::negate() {
        this->x = -x;
        this->y = -y;
        this->z = -z;
    }
}
