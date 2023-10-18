#include "matvec.h"
#include <cmath>

// Implementação da classe vec2
vec2::vec2() : x(0.0), y(0.0) {}
vec2::vec2(double x, double y) : x(x), y(y) {}

vec2 vec2::operator+(const vec2& other) const {
    return vec2(x + other.x, y + other.y);
}

vec2 vec2::operator-(const vec2& other) const {
    return vec2(x - other.x, y - other.y);
}

double vec2::operator*(const vec2& other) const {
    return x * other.x + y * other.y;
}

vec2 vec2::operator*(double scalar) const {
    return vec2(x * scalar, y * scalar);
}

vec2 vec2::operator/(double scalar) const {
    if (scalar == 0) {
        // Lida com divisão por zero
        return vec2(0, 0);
    }
    return vec2(x / scalar, y / scalar);
}

double vec2::length() const {
    return std::sqrt(x * x + y * y);
}

// Implementação da classe vec4
vec4::vec4() : x(0.0), y(0.0), z(0.0), w(0.0) {}
vec4::vec4(double x, double y, double z, double w) : x(x), y(y), z(z), w(w) {}

vec4 vec4::operator+(const vec4& other) const {
    return vec4(x + other.x, y + other.y, z + other.z, w + other.w);
}

vec4 vec4::operator-(const vec4& other) const {
    return vec4(x - other.x, y - other.y, z - other.z, w - other.w);
}

double vec4::operator*(const vec4& other) const {
    return x * other.x + y * other.y + z * other.z + w * other.w;
}

vec4 vec4::operator*(double scalar) const {
    return vec4(x * scalar, y * scalar, z * scalar, w * scalar);
}

vec4 vec4::operator/(double scalar) const {
    if (scalar == 0) {
        // Lida com divisão por zero
        return vec4(0, 0, 0, 0);
    }
    return vec4(x / scalar, y / scalar, z / scalar, w / scalar);
}

double vec4::length() const {
    return std::sqrt(x * x + y * y + z * z + w * w);
}

// Implementação das classes mat2, mat3 e mat4
mat2::mat2() {
    data[0][0] = 0.0;
    data[0][1] = 0.0;
    data[1][0] = 0.0;
    data[1][1] = 0.0;
}

mat2::mat2(double a, double b, double c, double d) {
    data[0][0] = a;
    data[0][1] = b;
    data[1][0] = c;
    data[1][1] = d;
}

mat2 mat2::operator+(const mat2& other) const {
    return mat2(data[0][0] + other.data[0][0], data[0][1] + other.data[0][1], data[1][0] + other.data[1][0], data[1][1] + other.data[1][1]);
}

mat3::mat3() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            data[i][j] = 0.0;
        }
    }
}

mat3::mat3(double a, double b, double c, double d, double e, double f, double g, double h, double i) {
    data[0][0] = a;
    data[0][1] = b;
    data[0][2] = c;
    data[1][0] = d;
    data[1][1] = e;
    data[1][2] = f;
    data[2][0] = g;
    data[2][1] = h;
    data[2][2] = i;
}

mat3 mat3::operator+(const mat3& other) const {
    mat3 result;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

mat4::mat4() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            data[i][j] = 0.0;
        }
    }
}

mat4::mat4(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k, double l, double m, double n, double o, double p) {
    data[0][0] = a;
    data[0][1] = b;
    data[0][2] = c;
    data[0][3] = d;
    data[1][0] = e;
    data[1][1] = f;
    data[1][2] = g;
    data[1][3] = h;
    data[2][0] = i;
    data[2][1] = j;
    data[2][2] = k;
    data[2][3] = l;
    data[3][0] = m;
    data[3][1] = n;
    data[3][2] = o;
    data[3][3] = p;
}

mat4 mat4::operator+(const mat4& other) const {
    mat4 result;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

// Implementação das operações de multiplicação de matriz por vetor (fora das classes)
vec2 operator*(const mat2& m, const vec2& v) {
    return vec2(m.data[0][0] * v.x + m.data[0][1] * v.y, m.data[1][0] * v.x + m.data[1][1] * v.y);
}

vec4 operator*(const mat4& m, const vec4& v) {
    return vec4(
        m.data[0][0] * v.x + m.data[0][1] * v.y + m.data[0][2] * v.z + m.data[0][3] * v.w,
        m.data[1][0] * v.x + m.data[1][1] * v.y + m.data[1][2] * v.z + m.data[1][3] * v.w,
        m.data[2][0] * v.x + m.data[2][1] * v.y + m.data[2][2] * v.z + m.data[2][3] * v.w,
        m.data[3][0] * v.x + m.data[3][1] * v.y + m.data[3][2] * v.z + m.data[3][3] * v.w
    );
}