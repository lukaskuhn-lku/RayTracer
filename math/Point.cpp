//
// Created by kuhn- on 25.11.2022.
//

#include "Point.h"
#include "Vector.h"

namespace math{
    Point::Point(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = 1.0f;
    }

    Point operator+(const Vector &v, const Point &p) {
        return p+v;
    }

    Point operator+(const Point &p, const Vector &v) {
        return {p.x+v.x, p.y+v.y, p.z+v.z};
    }
}