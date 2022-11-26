//
// Created by kuhn- on 26.11.2022.
//
#include <catch2/catch_all.hpp>
#include "../../math/Matrix4f.h"
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

TEST_CASE("Matrix4f change values", "[matrix]") {
    math::Matrix4f mat = math::Matrix4f(1.0f);
    mat(0,0) = 2.0f;

    REQUIRE(mat(0,0) == 2.0f);
}