//
// Created by kuhn- on 25.11.2022.
//

#include <catch2/catch_all.hpp>
#include "../../math/Tuple.h"

TEST_CASE("Tuple Constructor", "[tuple]") {
    math::Tuple t = math::Tuple(1.0f, 2.0f, 3.0f);
    REQUIRE(t.x == 1.0);
    REQUIRE(t.y == 2.0);
    REQUIRE(t.z == 3.0);
    REQUIRE(t.w == 0.0);
}

TEST_CASE("Tuple Comparison", "[tuple]") {
    math::Tuple t1 = math::Tuple(1.0f, 2.0f, 3.0f);
    math::Tuple t2 = math::Tuple(1.0f, 2.0f, 3.0f);
    math::Tuple t3 = math::Tuple(2.0f, 3.0f, 4.0f);

    REQUIRE(t1 == t2);
    REQUIRE(t2 != t3);
}