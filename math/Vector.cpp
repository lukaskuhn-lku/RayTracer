//
// Created by kuhn- on 26.11.2022.
//

#include "Vector.h"
#include <cmath>

namespace math{
    Vector::Vector(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = 0.0f;
    }

    Vector Vector::negate() {
        return{-x, -y, -z};
    }

    float Vector::magnitude() {
        return (float) std::sqrt(std::pow(this->x, 2) + std::pow(this->y, 2) + std::pow(this->z, 2));
    }

    Vector Vector::normalize() {
        float mag = this->magnitude();
        return {this->x/mag, this->y/mag, this->z/mag};
    }
}
