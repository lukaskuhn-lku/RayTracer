//
// Created by kuhn- on 26.11.2022.
//

#include "Color.h"
#include <cstdlib>


image::Color::Color(float r, float g, float b) {
    this->r = r;
    this->g = g;
    this->b = b;
}

bool image::operator==(const image::Color &c1, const image::Color &c2) {
    const float epsilon = 0.0001f;

    if(std::abs(c1.r-c2.r) > epsilon) return false;
    if(std::abs(c1.g-c2.g) > epsilon) return false;
    if(std::abs(c1.b-c2.b) > epsilon) return false;

    return true;
}

bool image::operator!=(const image::Color &c1, const image::Color &c2) {
    return !(c1 == c2);
}
