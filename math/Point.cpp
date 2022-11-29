//
// Created by kuhn- on 25.11.2022.
//

#include "Point.h"
#include "Vector.h"

namespace math {
    Point::Point(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = 1.0f;
    }
}