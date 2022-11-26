#include <iostream>
#include <vector>


#include <fstream>
#include <string>
#include <iostream>
#include "image/Canvas.h"

int main() {
    image::Canvas canvas = image::Canvas(10,10);
    canvas.writePixel(3,3,{1.0f, 0.5f, 0.3f});

    std::ofstream out("output.ppm");
    out << canvas.to_ppm();
    out.close();

    return 0;
}
