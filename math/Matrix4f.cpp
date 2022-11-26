//
// Created by kuhn- on 26.11.2022.
//

#include "Matrix4f.h"

namespace math{
    Matrix4f::Matrix4f(float x) {
        for(int i = 0; i<4; i++){
            this->mat.emplace_back(std::vector<float>{x,x,x,x});
        }
    }

    float& Matrix4f::operator()(int row, int column) {
            return this->mat[row][column];
    }


}
