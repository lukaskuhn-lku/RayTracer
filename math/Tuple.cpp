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
    };
}
