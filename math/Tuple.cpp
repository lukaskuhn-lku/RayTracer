//
// Created by kuhn- on 25.11.2022.
//

#include "Tuple.h"

namespace math {
    Tuple::Tuple(){
        this->x = 0.0f;
        this->y = 0.0f;
        this->z = 0.0f;
        this->w = 0.0f;
    }

    Tuple::Tuple(float x, float y, float z, float w) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = w;
    }

    bool operator==(const Tuple &t1, const Tuple &t2) {
        if(t1.x == t2.x && t1.y == t2.y && t1.z == t2.z && t1.w == t2.w) return true;

        return false;
    }

    bool operator!=(const Tuple &t1, const Tuple &t2) {
        return !(t1 == t2);
    };
}
