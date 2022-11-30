//
// Created by kuhn- on 25.11.2022.
//

#ifndef RAYTRACER_POINT_H
#define RAYTRACER_POINT_H

#include "Tuple.h"

namespace math {
    class Point : public Tuple {
    public:
        Point(float x, float y, float z);
        Point(float x, float y, float z, float w);
    };
}


#endif //RAYTRACER_POINT_H
