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

TEST_CASE("Color Comparison", "[color]") {
    image::Color c1 = image::Color(1.1f, 1.2f, 1.3f);
    image::Color c2 = image::Color(1.1f, 1.2f, 1.3f);

    REQUIRE(c1 == c2);
}

TEST_CASE("Add Color to Color", "[color]") {
    image::Color c1 = image::Color(1.0f, 1.0f, 1.0f);
    image::Color c2 = image::Color(1.5f, 1.3f, 1.1f);

    image::Color cc_res = image::Color(2.5f, 2.3f, 2.1f);

    image::Color cc = c1 + c2;

    REQUIRE(cc == cc_res);
}

TEST_CASE("Subtract Color from Color", "[color]") {
    image::Color c1 = image::Color(1.0f, 1.0f, 1.0f);
    image::Color c2 = image::Color(0.9f, 0.2f, 1.2f);

    image::Color cc_res = image::Color(0.1f, 0.8f, -0.2f);

    image::Color cc = c1 - c2;

    REQUIRE(cc == cc_res);
}

TEST_CASE("Multiplication Color by Scalar", "[color]") {
    image::Color c1 = image::Color(1.0f, 2.0f, 3.0f);
    float scalar = 0.3;

    image::Color cc_res = image::Color(0.3f, 0.6f, 0.9f);

    image::Color cc = c1 * scalar;

    REQUIRE(cc == cc_res);
}

TEST_CASE("Normalize Color to Int", "[color]") {
    image::Color c1 = image::Color(1.5f, 1.0f, 1.0f);
    std::vector<int> normed_res = {255, 255, 255};
    std::vector<int> normed = c1.normalizeInt(0, 255);

    REQUIRE(normed == normed_res);

    c1 = image::Color(-0.4f, 0.5f, 0.0f);
    normed_res = {0, 127, 0};
    normed = c1.normalizeInt(0, 255);

    REQUIRE(normed == normed_res);
}


