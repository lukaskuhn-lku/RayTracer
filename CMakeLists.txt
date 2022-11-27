cmake_minimum_required(VERSION 3.23)
project(rayTracer)

set(CMAKE_CXX_STANDARD 17)

add_executable(rayTracer main.cpp math/Point.cpp math/Point.h math/Tuple.cpp math/Tuple.h math/Vector.cpp math/Vector.h math/Math.cpp math/Math.h image/Color.cpp image/Color.h image/Canvas.cpp image/Canvas.h math/Matrix.cpp math/Matrix.h)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests math/Point.cpp math/Point.h tests/math/PointTests.cpp math/Tuple.cpp math/Tuple.h tests/math/TupleTests.cpp math/Vector.cpp math/Vector.h tests/math/VectorTests.cpp tests/math/MathTests.cpp math/Math.cpp math/Math.h image/Color.cpp image/Color.h tests/image/ColorTests.cpp image/Canvas.cpp image/Canvas.h tests/image/CanvasTests.cpp tests/math/MatrixTests.cpp math/Matrix.cpp math/Matrix.h)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
