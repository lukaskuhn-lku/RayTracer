//
// Created by kuhn- on 26.11.2022.
//

#ifndef RAYTRACER_MATRIX_H
#define RAYTRACER_MATRIX_H

#include <vector>
#include <tuple>

namespace math {
    class Matrix {
    public:
        std::pair<int, int> shape;

        Matrix(int n, int m, float x);

        Matrix(std::vector<std::vector<float>> input);


        float &operator()(int row, int column);

        friend bool operator==(const Matrix &mat1, const Matrix &mat2);

        friend bool operator!=(const Matrix &mat1, const Matrix &mat2);

        Matrix transpose() const;

        float get(int row, int column) const;

        bool isInvertible() const;

        std::string str() const;

    private:
        std::vector<std::vector<float>> mat;
    };

}


#endif //RAYTRACER_MATRIX_H
