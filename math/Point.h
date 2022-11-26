//
// Created by kuhn- on 25.11.2022.
//

#ifndef RAYTRACER_POINT_H
#define RAYTRACER_POINT_H

#include "Tuple.h"
#include "Vector.h"

namespace math{
    class Point: public Tuple {
    public:
        Point(float x, float y, float z);
    };

    Point operator+ (const Point &p, const Vector &v);
    Point operator+ (const Vector &v, const Point &p);
}





#endif //RAYTRACER_POINT_H
