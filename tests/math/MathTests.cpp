//
// Created by kuhn- on 26.11.2022.
//
#include <catch2/catch_all.hpp>
#include <iostream>
#include "../../math/Math.h"


TEST_CASE("Addition Point and Vector", "[math]") {
    math::Vector v = math::Vector(1.0f, 1.0f, 1.0f);
    math::Point p = math::Point(2.0f, 2.0f, 2.0f);

    math::Point pv_res = math::Point(3.0f, 3.0f, 3.0f);

    math::Point pv = p + v;

    REQUIRE(pv == pv_res);
}

TEST_CASE("Addition Vector and Vector", "[math]") {
    math::Vector v1 = math::Vector(1.0f, 1.0f, 1.0f);
    math::Vector v2 = math::Vector(2.0f, 2.0f, 2.0f);

    math::Vector vv_res = math::Vector(3.0f, 3.0f, 3.0f);

    math::Vector vv = v1 + v2;

    REQUIRE(vv == vv_res);
}

TEST_CASE("Subtraction Point and Point", "[math]") {
    math::Point p1 = math::Point(1.0f, 1.0f, 1.0f);
    math::Point p2 = math::Point(2.0f, 2.0f, 2.0f);

    math::Vector vv_res = math::Vector(-1.0f, -1.0f, -1.0f);

    math::Vector vv = p1 - p2;

    REQUIRE(vv == vv_res);
}

TEST_CASE("Subtraction Point and Vector", "[math]") {
    math::Point p = math::Point(1.0f, 1.0f, 1.0f);
    math::Vector v = math::Vector(1.0f, 1.0f, 1.0f);

    math::Point pv_res = math::Point(0.0f, 0.0f, 0.0f);

    math::Point pv = p - v;

    REQUIRE(pv == pv_res);
}

TEST_CASE("Subtraction Vector and Vector", "[math]") {
    math::Vector v1 = math::Vector(1.0f, 1.0f, 1.0f);
    math::Vector v2 = math::Vector(2.0f, 2.0f, 2.0f);

    math::Vector vv_res = math::Vector(-1.0f, -1.0f, -1.0f);

    math::Vector vv = v1 - v2;

    REQUIRE(vv == vv_res);
}

TEST_CASE("Multiplication Vector and Scalar", "[math]") {
    math::Vector v1 = math::Vector(1.0f, 1.0f, 1.0f);
    float scalar = 5;

    math::Vector vv_res = math::Vector(5.0f, 5.0f, 5.0f);

    math::Vector vv = scalar * v1;

    REQUIRE(vv == vv_res);
}

TEST_CASE("Division Vector and Scalar", "[math]") {
    math::Vector v1 = math::Vector(1.0f, 1.0f, 1.0f);
    float scalar = 2;

    math::Vector vv_res = math::Vector(0.5f, 0.5f, 0.5f);

    math::Vector vv = v1 / scalar;

    REQUIRE(vv == vv_res);
}

TEST_CASE("Dot Product Vectors", "[math]") {
    math::Vector v1 = math::Vector(1.0f, 2.0f, 3.0f);
    math::Vector v2 = math::Vector(2.0f, 3.0f, 4.0f);

    float dot = v1 * v2;

    REQUIRE(dot == 20);
}


TEST_CASE("Cross Product Vectors", "[math]") {
    math::Vector v1 = math::Vector(1.0f, 2.0f, 3.0f);
    math::Vector v2 = math::Vector(2.0f, 3.0f, 4.0f);

    math::Vector crossed = math::cross(v1, v2);
    math::Vector crossed_res = math::Vector(-1.0f, 2.0f, -1.0f);

    REQUIRE(crossed == crossed_res);
}

TEST_CASE("Determinant 2x2 Matrix", "[math]") {
    math::Matrix m1 = math::Matrix({{1.0f,  5.0f},
                                    {-3.0f, 2.0f}});

    float det = math::determinant(m1);

    REQUIRE(det == 17);
}


TEST_CASE("Submatrix 3x3 Matrix", "[math]") {
    math::Matrix m1 = math::Matrix({{1.0f, 2.0f, 3.0f},
                                    {4.0f, 5.0f, 6.0f},
                                    {7.0f, 8.0f, 9.0f}});
    math::Matrix m_res = math::Matrix({{5.0f, 6.0f},
                                       {8.0f, 9.0f}});

    math::Matrix m2 = math::submatrix(m1, 0, 0);

    REQUIRE(m2 == m_res);
}

TEST_CASE("Submatrix 4x4 Matrix", "[math]") {
    math::Matrix m1 = math::Matrix({{1.0f, 2.0f, 3.0f, 9.0f},
                                    {4.0f, 5.0f, 6.0f, 9.0f},
                                    {7.0f, 8.0f, 9.0f, 9.0f},
                                    {7.0f, 8.0f, 9.0f, 9.0f}});
    math::Matrix m_res = math::Matrix({{5.0f, 6.0f, 9.0f},
                                       {8.0f, 9.0f, 9.0f},
                                       {8.0f, 9.0f, 9.0f}});

    math::Matrix m2 = math::submatrix(m1, 0, 0);

    REQUIRE(m2 == m_res);
}

TEST_CASE("Minor 3x3 Matrix", "[math]") {
    math::Matrix m = math::Matrix({{3.0f, 5.0f, 0.0f},
                                       {2.0f, -1.0f, -7.0f},
                                       {6.0f, -1.0f, 5.0f}});

    REQUIRE(math::minor(m, 1, 0) == 25.0f);
}

TEST_CASE("Cofactor 3x3 Matrix", "[math]") {
    math::Matrix m = math::Matrix({{3.0f, 5.0f, 0.0f},
                                   {2.0f, -1.0f, -7.0f},
                                   {6.0f, -1.0f, 5.0f}});

    REQUIRE(math::minor(m, 0, 0) == -12.0f);
    REQUIRE(math::minor(m, 1, 0) == 25.0f);
    REQUIRE(math::cofactor(m, 0, 0) == -12.0f);
    REQUIRE(math::cofactor(m, 1, 0) == -25.0f);
}

TEST_CASE("Determinant 3x3 Matrix", "[math]") {
    math::Matrix m = math::Matrix({{1.0f, 2.0f, 6.0f},
                                   {-5.0f, 8.0f, -4.0f},
                                   {2.0f, 6.0f, 4.0f}});

    REQUIRE(math::cofactor(m, 0, 0) == 56.0f);
    REQUIRE(math::cofactor(m, 0, 1) == 12.0f);
    REQUIRE(math::cofactor(m, 0, 2) == -46.0f);
    REQUIRE(math::determinant(m) == -196.0f);
}

TEST_CASE("Determinant 4x4 Matrix", "[math]") {
    math::Matrix m = math::Matrix({{-2.0f, -8.0f, 3.0f, 5.0f},
                                   {-3.0f, 1.0f, 7.0f, 3.0f},
                                   {1.0f, 2.0f, -9.0f, 6.0f},
                                   {-6.0f, 7.0f, 7.0f, -9.0f}});

    REQUIRE(math::cofactor(m, 0, 0) == 690.0f);
    REQUIRE(math::cofactor(m, 0, 1) == 447.0f);
    REQUIRE(math::cofactor(m, 0, 2) == 210.0f);
    REQUIRE(math::cofactor(m, 0, 3) == 51.0f);
    REQUIRE(math::determinant(m) == -4071.0f);
}


TEST_CASE("Inverse 4x4 Matrix", "[math]") {
    math::Matrix m = math::Matrix({{-5.0f, 2.0f, 6.0f, -8.0f},
                                   {1.0f, -5.0f, 1.0f, 8.0f},
                                   {7.0f, 7.0f, -6.0f, -7.0f},
                                   {1.0f, -3.0f, 7.0f, 4.0f}});

    REQUIRE(math::determinant(m) == 532.0f);
    REQUIRE(math::cofactor(m, 2,3) == -160.0f);
    REQUIRE(math::cofactor(m, 3,2) == 105.0f);

    REQUIRE(math::inverse(m).get(3,2) == -160.0f/532.0f);
    REQUIRE(math::inverse(m).get(2,3) == 105.0f/532.0f);
}

TEST_CASE("Inverse 4x4 Matrix and Multiply", "[math]") {
    math::Matrix m1 = math::Matrix({{-5.0f, 2.0f, 6.0f, -8.0f},
                                   {1.0f, -5.0f, 1.0f, 8.0f},
                                   {7.0f, 7.0f, -6.0f, -7.0f},
                                   {1.0f, -3.0f, 7.0f, 4.0f}});


    math::Matrix m2 = math::Matrix({{-2.0f, -8.0f, 3.0f, 5.0f},
                                   {-3.0f, 1.0f, 7.0f, 3.0f},
                                   {1.0f, 2.0f, -9.0f, 6.0f},
                                   {-6.0f, 7.0f, 7.0f, -9.0f}});

    math::Matrix m3 = m1*m2;

    math::Matrix res = m3 * math::inverse(m2);
    REQUIRE(res == m1);
}


