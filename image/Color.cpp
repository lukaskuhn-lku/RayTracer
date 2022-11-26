//
// Created by kuhn- on 26.11.2022.
//

#include "Color.h"
#include <cstdlib>


namespace image {
    Color::Color(float r, float g, float b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }

    bool operator==(const image::Color &c1, const image::Color &c2) {
        const float epsilon = 0.0001f;

        if (std::abs(c1.r - c2.r) > epsilon) return false;
        if (std::abs(c1.g - c2.g) > epsilon) return false;
        if (std::abs(c1.b - c2.b) > epsilon) return false;

        return true;
    }

    bool operator!=(const image::Color &c1, const image::Color &c2) {
        return !(c1 == c2);
    }

    std::vector<int> Color::normalizeInt(int min, int max) const {
        std::vector<int> vals = {};

        vals.push_back((int) (this->r * max));
        vals.push_back((int) (this->g * max));
        vals.push_back((int) (this->b * max));

        for(int & val : vals){
            if(val > max) val = max;
            if(val < min) val = min;
        }

        return vals;
    }

    Color operator+(const image::Color &c1, const image::Color &c2) {
        return {c1.r + c2.r, c1.g + c2.g, c1.b + c2.b};
    }

    Color operator-(const Color &c1, const Color &c2) {
        return {c1.r - c2.r, c1.g - c2.g, c1.b - c2.b};
    }

    Color operator*(const Color &c1, const Color &c2) {
        return {c1.r * c2.r, c1.g * c2.g, c1.b * c2.b};
    }

    Color operator*(float s, const Color &c) {
        return {c.r * s, c.g * s, c.b * s};
    }

    Color operator*(const Color &c, float s) {
        return s * c;
    }
}

