//
// Created by kuhn- on 26.11.2022.
//

#ifndef RAYTRACER_MATRIX4F_H
#define RAYTRACER_MATRIX4F_H


#include <vector>

namespace math{
    class Matrix4f {
    public:
        Matrix4f(float x);
        float& operator()(int row, int column);
    private:
        std::vector<std::vector<float>> mat;
    };
}


#endif //RAYTRACER_MATRIX4F_H
