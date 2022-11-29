//
// Created by kuhn- on 26.11.2022.
//

#include <stdexcept>
#include "Matrix.h"

namespace math {
    Matrix::Matrix(int n, int m, float x) {
        for (int i = 0; i < m; i++) {
            this->mat.emplace_back(std::vector<float>{});

            for (int j = 0; j < n; j++) {
                if (j == i) { this->mat[i].emplace_back(x); }
                else { this->mat[i].emplace_back(0.0f); }
            }
        }

        this->shape = std::make_pair(n, m);
    }

    //Create matrix from array
    Matrix::Matrix(std::vector<std::vector<float>> input) {
        for (int i = 0; i < input.size(); i++) {
            this->mat.emplace_back(std::vector<float>{});

            for (int j = 0; j < input[i].size(); j++) {
                this->mat[i].emplace_back(input[i][j]);
            }
        }

        this->shape = std::make_pair(input.size(), input[0].size());
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

    bool operator==(const Matrix &mat1, const Matrix &mat2) {
        return mat1.mat == mat2.mat;
    }

    bool operator!=(const Matrix &mat1, const Matrix &mat2) {
        return !(mat1 == mat2);
    }

    float Matrix::get(int row, int column) const {
        return this->mat[row][column];
    }

    std::string Matrix::str() const{
        std::string matrixStr;

        for(int row = 0; row < this->shape.first; row++){
            for(int column = 0; column<this->shape.second; column++){
                matrixStr += std::to_string(this->get(row, column)) + " ";
            }
            matrixStr += "\n";
        }

        return matrixStr;
    }

    Matrix Matrix::transpose() const {
        Matrix trans = Matrix(this->shape.first, this->shape.second, 0.0f);

        for(int column = 0; column<this->shape.first; column++){
            for(int row = 0; row<this->shape.second; row++){
                trans(column, row) = this->get(row, column);
            }
        }

        return trans;
    }


}
