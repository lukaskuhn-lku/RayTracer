//
// Created by kuhn- on 26.11.2022.
//

#include <stdexcept>
#include "Matrix.h"

namespace math {
    Matrix::Matrix(int n, int m, float x) {
        for (int i = 0; i < n; i++) {
            this->mat.emplace_back(std::vector<float>{});

            for (int j = 0; j < m; j++) {
                this->mat[i].emplace_back(x);
            }
        }

        this->shape = std::make_pair(n, m);
    }

    float &Matrix::operator()(int row, int column) {
        if (row < this->shape.first && column < this->shape.second) {
            return this->mat[row][column];
        } else {
            throw std::range_error(
                    "Index (" + std::to_string(row) + "," + std::to_string(column) +
                    ") is out of range for matrix of shape (" + std::to_string(this->shape.first) + "," +
                    std::to_string(this->shape.second) + ")!");
        }

    }
}
