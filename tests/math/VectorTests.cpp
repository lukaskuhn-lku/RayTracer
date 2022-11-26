//
// Created by kuhn- on 26.11.2022.
//
#include <catch2/catch_all.hpp>
#include "../../math/Vector.h"

TEST_CASE("Vector Constructor", "[vector]") {
    math::Vector v = math::Vector(1.0f, 2.0f, 3.0f);
    REQUIRE(v.x == 1.0);
    REQUIRE(v.y == 2.0);
    REQUIRE(v.z == 3.0);
    REQUIRE(v.w == 0.0);
}

TEST_CASE("Vector Comparison", "[vector]") {
    math::Vector v1 = math::Vector(1.0f, 2.0f, 3.0f);
    math::Vector v2 = math::Vector(1.0f, 2.0f, 3.0f);
    math::Vector v3 = math::Vector(2.0f, 3.0f, 4.0f);

    REQUIRE(v1 == v2);
    REQUIRE(v2 != v3);
}

TEST_CASE("Negate Vector", "[vector]") {
    math::Vector v1 = math::Vector(1.0f, 2.0f, 3.0f);
    math::Vector v_res = math::Vector(-1.0f, -2.0f, -3.0f);

    REQUIRE(v1.negate() == v_res);
}

TEST_CASE("Magnitude Vector", "[vector]") {
    math::Vector v1 = math::Vector(1.0f, 0.0f, 0.0f);
    REQUIRE(v1.magnitude() == 1.0f);

    math::Vector v2 = math::Vector(0.0f, 3.0f, 0.0f);
    REQUIRE(v2.magnitude() == 3.0f);

    math::Vector v3 = math::Vector(4.0f, 3.0f, 0.0f);
    REQUIRE(v3.magnitude() == 5.0f);
}

TEST_CASE("Normalize Vector", "[vector]") {
    math::Vector v1 = math::Vector(4.0f, 0.0f, 0.0f);
    math::Vector v1_res = math::Vector(1.0f, 0.0f, 0.0f);

    REQUIRE(v1.normalize() == v1_res);
}