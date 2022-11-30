//
// Created by kuhn- on 26.11.2022.
//

#include <stdexcept>
#include "Math.h"

namespace math {
    // POINT + VEC
    Point operator+(const Point &p, const Vector &v) {
        return {p.x + v.x, p.y + v.y, p.z + v.z};
    }

    // VEC + POINT
    Point operator+(const Vector &v, const Point &p) {
        return p + v;
    }

    // VEC + VEC
    Vector operator+(const Vector &v1, const Vector &v2) {
        return {v1.x + v2.x, v1.y + v2.y, v1.z + v2.z};
    }

    // POINT - POINT
    Vector operator-(const Point &p1, const Point &p2) {
        return {p1.x - p2.x, p1.y - p2.y, p1.z - p2.z};
    }

    // POINT - VEC
    Point operator-(const Point &p, const Vector &v) {
        return {p.x - v.x, p.y - v.y, p.z - v.z};
    }

    // VEC - VEC
    Vector operator-(const Vector &v1, const Vector &v2) {
        return {v1.x - v2.x, v1.y - v2.y, v1.z - v2.z};
    }

    // VEC * SCALAR
    Vector operator*(const Vector &v, float s) {
        return {v.x * s, v.y * s, v.z * s};
    }

    // VEC * SCALAR
    Vector operator*(float s, const Vector &v) {
        return v * s;
    }

    // VEC / SCALAR
    Vector operator/(const Vector &v, float s) {
        return {v.x / s, v.y / s, v.z / s};
    }

    float operator*(const Vector &v1, const Vector &v2) {
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
    }

    Vector cross(const Vector &v1, const Vector &v2) {
        return {v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x};
    }

    Matrix operator*(const Matrix &m1, const Matrix &m2) {
        if (m1.shape.second != m2.shape.first) {
            throw std::invalid_argument("Invalid shapes for matrix multiplication");
        }

        Matrix C = Matrix(m1.shape.first, m2.shape.second, 0.0f);

        int n = m1.shape.first;
        int m = m1.shape.second;
        int p = m2.shape.second;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < p; j++) {
                float sum = 0;
                for (int k = 0; k < m; k++) {
                    sum += m1.get(i, k) * m2.get(k, j);
                }

                C(i, j) = sum;
            }
        }

        return C;
    }

    float determinant(const Matrix &m) {
        float det = 0;

        if (m.shape.first == m.shape.second && m.shape.first == 2) {
            det =  m.get(0, 0) * m.get(1, 1) - m.get(0, 1) * m.get(1, 0);
        }else{
            for(int column = 0; column < m.shape.second; column++){
                det = det + m.get(0, column) * cofactor(m, 0, column);
            }
        }

        return det;
    }

    Matrix submatrix(const Matrix &m, int row, int column) {
        std::vector<std::vector<float>> mat;

        for (int r = 0; r < m.shape.first; r++) {
            if (r == row) continue;

            std::vector<float> tmp;
            for (int c = 0; c < m.shape.second; c++) {
                if (c == column) continue;

                tmp.emplace_back(m.get(r, c));
            }

            mat.emplace_back(tmp);
        }

        return {mat};
    }

    float minor(const Matrix &m, int row, int column) {
        Matrix B = submatrix(m, row, column);
        return(determinant(B));
    }

    float cofactor(const Matrix &m, int row, int column) {
        if((row + column) % 2 != 0){
            return minor(m, row, column) * -1;
        }

        return minor(m, row, column);
    }

    Matrix inverse(const Matrix &m) {
        if(!m.isInvertible()) throw std::invalid_argument("Matrix is not invertible");

        Matrix inv = Matrix(m.shape.first, m.shape.second, 0.0f);
        float deter = determinant(m);

        for(int row = 0; row<m.shape.first; row++){
            for(int col = 0; col<m.shape.second; col++){
                float c = cofactor(m, row, col);
                inv(col, row) = c / deter;
            }
        }

        return inv;
    }
}