//
// Created by kuhn- on 25.11.2022.
//

#ifndef RAYTRACER_TUPLE_H
#define RAYTRACER_TUPLE_H

namespace math {
    class Tuple {
    public:

        float x, y, z, w;

        Tuple(float x, float y, float z, float w);

        Tuple();

        friend bool operator==(const Tuple &t1, const Tuple &t2);

        friend bool operator!=(const Tuple &t1, const Tuple &t2);
    };
}


#endif //RAYTRACER_TUPLE_H
