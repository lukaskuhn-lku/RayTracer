//
// Created by kuhn- on 26.11.2022.
//

#include "Math.h"

namespace math{
    // POINT + VEC
    Point operator+(const Point &p, const Vector &v) {
        return {p.x+v.x, p.y+v.y, p.z+v.z};
    }

    // VEC + POINT
    Point operator+(const Vector &v, const Point &p) {
        return p+v;
    }

    // VEC + VEC
    Vector operator+(const Vector &v1, const Vector &v2) {
        return {v1.x+v2.x, v1.y+v2.y, v1.z+v2.z};
    }

    // POINT - POINT
    Vector operator-(const Point &p1, const Point &p2) {
        return {p1.x-p2.x, p1.y-p2.y, p1.z-p2.z};
    }

    // POINT - VEC
    Point operator-(const Point &p, const Vector &v) {
        return {p.x-v.x, p.y-v.y, p.z-v.z};
    }

    // VEC - VEC
    Vector operator-(const Vector &v1, const Vector &v2){
        return {v1.x - v2.x, v1.y - v2.y, v1.z-v2.z};
    }

    Vector operator*(const Vector &v1, float s) {
        return {v1.x * s, v1.y * s, v1.z * s};
    }

    Vector operator*(float s, const Vector &v1) {
        return v1*s;
    }


}