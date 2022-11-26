//
// Created by kuhn- on 26.11.2022.
//
#include <catch2/catch_all.hpp>
#include "../../image/Color.h"

TEST_CASE("Create a Color", "[color]") {

    image::Color color = image::Color(1.0f, 1.0f, 1.0f);

    REQUIRE(color.r == 1.0f);
    REQUIRE(color.g == 1.0f);
    REQUIRE(color.b == 1.0f);
}
