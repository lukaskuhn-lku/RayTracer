//
// Created by kuhn- on 26.11.2022.
//

#ifndef RAYTRACER_COLOR_H
#define RAYTRACER_COLOR_H

#include <vector>

namespace image {
    class Color {
    public:
        float r, g, b;

        Color(float r, float g, float b);

        std::vector<int> normalizeInt(int min, int max) const;

        friend bool operator==(const Color &c1, const Color &c2);

        friend bool operator!=(const Color &c1, const Color &c2);
    };

    Color operator+(const Color &c1, const Color &c2);

    Color operator-(const Color &c1, const Color &c2);

    Color operator*(const Color &c1, const Color &c2);

    Color operator*(float s, const Color &c);

    Color operator*(const Color &c, float s);
}

#endif //RAYTRACER_COLOR_H
