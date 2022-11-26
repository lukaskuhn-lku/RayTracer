//
// Created by kuhn- on 26.11.2022.
//
#include <catch2/catch_all.hpp>
#include "../../math/Matrix4f.h"


TEST_CASE("Matrix4f Constructor", "[matrix4f]") {
    math::Matrix4f mat = math::Matrix4f(1.0f);
    float f = mat(0,0);

    REQUIRE(f == 1.0f);
}

TEST_CASE("Matrix4f change values", "[matrix4f]") {
    math::Matrix4f mat = math::Matrix4f(1.0f);
    mat(0,0) = 2.0f;

    REQUIRE(mat(0,0) == 2.0f);
}