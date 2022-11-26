//
// Created by kuhn- on 26.11.2022.
//

#include "Canvas.h"

namespace image{

    Canvas::Canvas(int width, int height) {
        this->width = width;
        this->height = height;

        for(int h = 0; h<height; h++){
            this->canvas.emplace_back(std::vector<Color>{});
            for (int w = 0; w < width; w++)
                this->canvas[h].emplace_back(Color(0.0f, 0.0f, 0.0f));
        }
    }

    Color Canvas::getPixel(int x, int y) {
        return this->canvas[y][x];
    }

    void Canvas::writePixel(int x, int y, Color c) {
        if(x <= (this->width-1) && y <= (this->height-1)){
            this->canvas[y][x] = c;
        }
    }

    std::string Canvas::to_ppm() const {
        std::string ppm_string;

        ppm_string += "P3\n";
        ppm_string += std::to_string(this->width) + " " + std::to_string(this->height) + "\n";
        ppm_string += "255\n";

        for(int h = 0; h<this->height; h++) {
            for(int w = 0; w<this->width; w++){
                std::vector<int> normVals = this->canvas[h][w].normalizeInt(0,255);
                ppm_string += std::to_string(normVals[0]) + " " + std::to_string(normVals[1]) + " " + std::to_string(normVals[2]);
                if(w != width-1){
                    ppm_string += " ";
                }else{
                    ppm_string += "\n";
                }
            }
        }

        return ppm_string;
    }


}
