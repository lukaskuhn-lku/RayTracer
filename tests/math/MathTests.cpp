//
// Created by kuhn- on 26.11.2022.
//
#include <catch2/catch_all.hpp>
#include "../../math/Math.h"


TEST_CASE("Addition Point and Vector", "[math]") {
    math::Vector v = math::Vector(1.0f, 1.0f, 1.0f);
    math::Point p = math::Point(2.0f, 2.0f, 2.0f);

    math::Point pv_res = math::Point(3.0f, 3.0f, 3.0f);

    math::Point pv = p+v;

    REQUIRE(pv == pv_res);
}

TEST_CASE("Addition Vector and Vector", "[math]") {
    math::Vector v1 = math::Vector(1.0f, 1.0f, 1.0f);
    math::Vector v2 = math::Vector(2.0f, 2.0f, 2.0f);

    math::Vector vv_res = math::Vector(3.0f, 3.0f, 3.0f);

    math::Vector vv = v1+v2;

    REQUIRE(vv == vv_res);
}

TEST_CASE("Subtraction Point and Point", "[math]") {
    math::Point p1 = math::Point(1.0f, 1.0f, 1.0f);
    math::Point p2 = math::Point(2.0f, 2.0f, 2.0f);

    math::Vector vv_res = math::Vector(-1.0f, -1.0f, -1.0f);

    math::Vector vv = p1-p2;

    REQUIRE(vv == vv_res);
}

TEST_CASE("Subtraction Point and Vector", "[math]") {
    math::Point p = math::Point(1.0f, 1.0f, 1.0f);
    math::Vector v = math::Vector(1.0f, 1.0f, 1.0f);

    math::Point pv_res = math::Point(0.0f, 0.0f, 0.0f);

    math::Point pv = p-v;

    REQUIRE(pv == pv_res);
}

TEST_CASE("Subtraction Vector and Vector", "[math]") {
    math::Vector v1 = math::Vector(1.0f, 1.0f, 1.0f);
    math::Vector v2 = math::Vector(2.0f, 2.0f, 2.0f);

    math::Vector vv_res = math::Vector(-1.0f, -1.0f, -1.0f);

    math::Vector vv = v1-v2;

    REQUIRE(vv == vv_res);
}

TEST_CASE("Multiplication Vector and Scalar", "[math]") {
    math::Vector v1 = math::Vector(1.0f, 1.0f, 1.0f);
    float scalar = 5;

    math::Vector vv_res = math::Vector(5.0f, 5.0f, 5.0f);

    math::Vector vv = scalar*v1;

    REQUIRE(vv == vv_res);
}





