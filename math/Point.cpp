//
// Created by kuhn- on 25.11.2022.
//

#include "Point.h"

namespace math{
    Point::Point(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = 1.0f;
    }

    bool operator==(const Point &p1, const Point &p2) {
        if(p1.x == p2.x && p1.y == p2.y && p1.z == p2.z && p1.w == p2.w) return true;

        return false;
    }

    bool operator!=(const Point &p1, const Point &p2) {
        return !(p1 == p2);
    }
}