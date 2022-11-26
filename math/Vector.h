//
// Created by kuhn- on 26.11.2022.
//

#ifndef RAYTRACER_VECTOR_H
#define RAYTRACER_VECTOR_H

#include "Tuple.h"

namespace math {
    class Vector : public Tuple {
    public:
        Vector(float x, float y, float z);

        void negate();
    };
}


#endif //RAYTRACER_VECTOR_H
