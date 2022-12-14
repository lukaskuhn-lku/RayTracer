//
// Created by kuhn- on 26.11.2022.
//

#ifndef RAYTRACER_MATH_H
#define RAYTRACER_MATH_H

#include "Point.h"
#include "Vector.h"
#include "Matrix.h"

namespace math {
    Point operator+(const Point &p, const Vector &v);

    Point operator+(const Vector &v, const Point &p);

    Vector operator+(const Vector &v1, const Vector &v2);

    Vector operator-(const Point &p1, const Point &p2);

    Point operator-(const Point &p1, const Vector &p2);

    Vector operator-(const Vector &v1, const Vector &v2);

    Vector operator*(const Vector &v, float s);

    Vector operator*(float s, const Vector &v);

    float operator*(const Vector &v1, const Vector &v2);

    Vector operator/(const Vector &v, float s);

    Vector cross(const Vector &v1, const Vector &v2);

    Matrix operator*(const Matrix &m1, const Matrix &m2);

    float determinant(const Matrix &m);

    Matrix submatrix(const Matrix &m, int row, int column);

    float minor(const Matrix &m, int row, int column);

    float cofactor(const Matrix &m, int row, int column);

    Matrix inverse(const Matrix &m);

    Point operator*(const Point &p, const Matrix &m1);
    Point operator*(const Matrix &m1, const Point &p);
}

#endif //RAYTRACER_MATH_H
