//
// Created by kuhn- on 26.11.2022.
//

#ifndef RAYTRACER_COLOR_H
#define RAYTRACER_COLOR_H

namespace image{
    class Color {
    public:
        float r, g, b;

        Color(float r, float g, float b);

        friend bool operator==(const Color &c1, const Color &c2);
        friend bool operator!=(const Color &c1, const Color &c2);
    };

    Color operator+(const Color &c1, const Color &c2);
    Color operator-(const Color &c1, const Color &c2);

    Color operator*(const Color &c1, const Color &c2);
}

#endif //RAYTRACER_COLOR_H
