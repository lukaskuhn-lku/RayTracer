//
// Created by kuhn- on 26.11.2022.
//

#ifndef RAYTRACER_CANVAS_H
#define RAYTRACER_CANVAS_H


#include "Color.h"
#include <vector>
#include <string>

namespace image {
    class Canvas {
    public:
        Canvas(int width, int height);
        Color getPixel(int x, int y);
        void writePixel(int x, int y, Color c);

        std::string to_ppm() const;
    private:
        std::vector<std::vector<Color>> canvas;

        int width;
        int height;
    };
}


#endif //RAYTRACER_CANVAS_H
