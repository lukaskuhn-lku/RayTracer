//
// Created by kuhn- on 25.11.2022.
//

#include <catch2/catch_all.hpp>
#include "../../math/Point.h"

TEST_CASE("Point Constructor", "[points]") {
    math::Point p = math::Point(1.0f, 2.0f, 3.0f);
    REQUIRE(p.x == 1.0);
    REQUIRE(p.y == 2.0);
    REQUIRE(p.z == 3.0);
    REQUIRE(p.w == 1.0);
}

TEST_CASE("Point Comparison", "[points]") {
    math::Point p1 = math::Point(1.0f, 2.0f, 3.0f);
    math::Point p2 = math::Point(1.0f, 2.0f, 3.0f);
    math::Point p3 = math::Point(2.0f, 3.0f, 4.0f);

    REQUIRE(p1 == p2);
    REQUIRE(p2 != p3);
}