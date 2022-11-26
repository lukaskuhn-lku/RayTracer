//
// Created by kuhn- on 26.11.2022.
//
#include <catch2/catch_all.hpp>
#include "../../image/Canvas.h"

TEST_CASE("Create a Canvas", "[canvas]") {
    image::Canvas canvas = image::Canvas(10, 20);
    image::Color c = canvas.getPixel(0, 0);

    image::Color c_res = image::Color(0.0f, 0.0f, 0.0f);
    REQUIRE(c == c_res);
}

TEST_CASE("Write Pixel to Canvas", "[canvas]") {
    image::Canvas canvas = image::Canvas(10, 20);

    image::Color c = image::Color(0.5f, 0.5f, 0.5f);

    canvas.writePixel(10, 10, c);
    image::Color canvas_pixel = canvas.getPixel(10, 10);

    REQUIRE(canvas_pixel != c);

    canvas.writePixel(9, 10, c);
    canvas_pixel = canvas.getPixel(9, 10);

    REQUIRE(canvas_pixel == c);
}

TEST_CASE("Canvas to PPM", "[canvas]") {
    image::Canvas canvas = image::Canvas(3, 3);

    std::string ppm = canvas.to_ppm();
    std::string ppm_res = "P3\n"
                          "3 3\n"
                          "255\n"
                          "0 0 0 0 0 0 0 0 0\n"
                          "0 0 0 0 0 0 0 0 0\n"
                          "0 0 0 0 0 0 0 0 0\n";


    REQUIRE(ppm == ppm_res);
}