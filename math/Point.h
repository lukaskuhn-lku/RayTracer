//
// Created by kuhn- on 25.11.2022.
//

#ifndef RAYTRACER_POINT_H
#define RAYTRACER_POINT_H

namespace math{
    class Point {
    public:
        float x, y, z, w;

        Point(float x, float y, float z);

        friend bool operator== (const Point& p1, const Point& p2);
        friend bool operator!= (const Point& p1, const Point& p2);
    };
}


#endif //RAYTRACER_POINT_H
