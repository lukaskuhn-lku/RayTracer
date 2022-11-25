//
// Created by kuhn- on 25.11.2022.
//

#include "Tuple.h"

namespace math {
    Tuple::Tuple(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = 0.0f;
    }

    bool operator==(const Tuple &t1, const Tuple &t2) {
        if(t1.x == t2.x && t1.y == t2.y && t1.z == t2.z && t1.w == t2.w) return true;

        return false;
    }

    bool operator!=(const Tuple &t1, const Tuple &t2) {
        return !(t1 == t2);
    };
}
