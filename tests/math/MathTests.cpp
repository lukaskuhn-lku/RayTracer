//
// Created by kuhn- on 26.11.2022.
//
#include <catch2/catch_all.hpp>
#include "../../math/Vector.h"
#include "../../math/Point.h"

TEST_CASE("Addition Point and Vector", "[math]") {
    math::Vector v = math::Vector(1.0f, 1.0f, 1.0f);
    math::Point p = math::Point(2.0f, 2.0f, 2.0f);

    math::Point pv_real = math::Point(3.0f, 3.0f, 3.0f);

    math::Point pv = p+v;

    REQUIRE(pv == pv_real);
}

TEST_CASE("Addition Vector and Vector", "[math]") {
    math::Vector v1 = math::Vector(1.0f, 1.0f, 1.0f);
    math::Vector v2 = math::Vector(2.0f, 2.0f, 2.0f);

    math::Vector vv_real = math::Vector(3.0f, 3.0f, 3.0f);

    math::Vector vv = v1+v2;

    REQUIRE(vv == vv_real);
}

