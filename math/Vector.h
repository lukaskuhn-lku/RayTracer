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
    };

    Vector operator+ (const Vector &v1, const Vector &v2);
}


#endif //RAYTRACER_VECTOR_H
