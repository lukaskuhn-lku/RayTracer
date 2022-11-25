//
// Created by kuhn- on 25.11.2022.
//

#include <catch2/catch_all.hpp>
#include "../../math/Tuple.h"

TEST_CASE( "Tuple Constructor", "[tuple]" ) {
    math::Tuple t = math::Tuple(1.0f, 2.0f, 3.0f);
    REQUIRE(t.x == 1.0);
    REQUIRE(t.y == 2.0);
    REQUIRE(t.z == 3.0);
    REQUIRE(t.w == 0.0);
}