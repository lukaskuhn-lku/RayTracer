//
// Created by kuhn- on 26.11.2022.
//

#ifndef RAYTRACER_MATRIX_H
#define RAYTRACER_MATRIX_H

#include <vector>
#include <tuple>

namespace math{
    class Matrix {
        public:
            std::pair<int, int> shape;
            Matrix(int n, int m, float x);

        float& operator()(int row, int column);
        private:
            std::vector<std::vector<float>> mat;
    };
}


#endif //RAYTRACER_MATRIX_H
