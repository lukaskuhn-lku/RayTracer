//
// Created by kuhn- on 26.11.2022.
//
#include <catch2/catch_all.hpp>
#include "../../math/Matrix.h"


TEST_CASE("Matrix Constructor 2x2", "[matrix]") {
    math::Matrix mat = math::Matrix(2, 2, 1.0f);
    float f = mat(0,0);

    REQUIRE(f == 1.0f);
}

TEST_CASE("Matrix Constructor 3x3", "[matrix]") {
    math::Matrix mat = math::Matrix(3, 3, 2.0f);
    float f = mat(1,1);

    REQUIRE(f == 2.0f);
}


TEST_CASE("Matrix Comparison", "[matrix]") {
    math::Matrix mat1 = math::Matrix(2,2,1.0f);
    math::Matrix mat2 = math::Matrix(3,3,1.0f);
    math::Matrix mat3 = math::Matrix(2,2,1.0f);

    REQUIRE(mat1 != mat2);
    REQUIRE(mat1 == mat3);
}