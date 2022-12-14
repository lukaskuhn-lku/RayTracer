//
// Created by kuhn- on 26.11.2022.
//
#include <catch2/catch_all.hpp>
#include <iostream>
#include "../../math/Matrix.h"
#include "../../math/Math.h"

TEST_CASE("Matrix Constructor 2x2", "[matrix]") {
    math::Matrix mat = math::Matrix(2, 2, 1.0f);
    float f = mat(0, 0);

    REQUIRE(f == 1.0f);
}

TEST_CASE("Matrix Constructor 3x3", "[matrix]") {
    math::Matrix mat = math::Matrix(3, 3, 2.0f);
    float f = mat(1, 1);

    REQUIRE(f == 2.0f);
}


TEST_CASE("Matrix Comparison", "[matrix]") {
    math::Matrix mat1 = math::Matrix(2, 2, 1.0f);
    math::Matrix mat2 = math::Matrix(3, 3, 1.0f);
    math::Matrix mat3 = math::Matrix(2, 2, 1.0f);

    REQUIRE(mat1 != mat2);
    REQUIRE(mat1 == mat3);
}

TEST_CASE("Matrix Multiplication", "[matrix]") {
    math::Matrix mat1 = math::Matrix(2, 2, 0.0f);
    math::Matrix mat2 = math::Matrix(2, 2, 0.0f);

    math::Matrix mat_res = math::Matrix(2, 2, 0.0f);

    mat1(0, 0) = 1.0f;
    mat1(0, 1) = 3.0f;
    mat1(1, 0) = 2.0f;
    mat1(1, 1) = 4.0f;

    mat2(0, 0) = 2.0f;
    mat2(0, 1) = 3.0f;
    mat2(1, 0) = 1.0f;
    mat2(1, 1) = 2.0f;

    mat_res(0, 0) = 5.0f;
    mat_res(0, 1) = 9.0f;
    mat_res(1, 0) = 8.0f;
    mat_res(1, 1) = 14.0f;

    REQUIRE((mat1 * mat2) == mat_res);
}

TEST_CASE("Matrix Transposition", "[matrix]") {
    math::Matrix mat1 = math::Matrix(2, 2, 0.0f);
    math::Matrix mat2 = math::Matrix(2, 2, 0.0f);

    mat1(0, 0) = 1.0f;
    mat1(0, 1) = 3.0f;
    mat1(1, 0) = 2.0f;
    mat1(1, 1) = 4.0f;

    mat2(0, 0) = 1.0f;
    mat2(0, 1) = 2.0f;
    mat2(1, 0) = 3.0f;
    mat2(1, 1) = 4.0f;

    REQUIRE(mat1.transpose() == mat2);
}

TEST_CASE("Create Matrix from Array", "[matrix]") {
    math::Matrix mat1 = math::Matrix({{1.0f, 2.0f, 3.0f},
                                      {4.0f, 5.0f, 6.0f}});

    REQUIRE(mat1(0, 0) == 1.0f);
    REQUIRE(mat1(1, 0) == 4.0f);
    REQUIRE(mat1.shape.first == 2);
    REQUIRE(mat1.shape.second == 3);
}

TEST_CASE("Is Matrix Invertible", "[matrix]") {
    math::Matrix m1 = math::Matrix({{6.0f, 4.0f, 4.0f, 4.0f},
                                   {5.0f, 5.0f, 7.0f, 6.0f},
                                   {4.0f, -9.0f, 3.0f, -7.0f},
                                   {9.0f, 1.0f, 7.0f, -6.0f}});

    REQUIRE(m1.isInvertible());

    math::Matrix m2 = math::Matrix({{-4.0f, 2.0f, -2.0f, -3.0f},
                                   {9.0f, 6.0f, 2.0f, 6.0f},
                                   {0.0f, -5.0f, 1.0f, -5.0f},
                                   {0.0f, 0.0f, 0.0f, 0.0f}});

    REQUIRE(!m2.isInvertible());
}