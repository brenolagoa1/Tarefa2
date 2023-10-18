#ifndef MATVEC_H
#define MATVEC_H


/// <summary>
/// classe que implementa vetor de 2 valores e suas funções
/// </summary>
class vec2 {
public:
    double x, y;

    vec2();
    vec2(double x, double y);

    vec2 operator+(const vec2& other) const;
    vec2 operator-(const vec2& other) const;
    double operator*(const vec2& other) const;
    vec2 operator*(double scalar) const;
    vec2 operator/(double scalar) const;
    double length() const;
};

/// <summary>
/// classe que implementa vetor de 4 valores(4d) e seus metodos
/// </summary>
class vec4 {
public:
    double x, y, z, w;

    vec4();
    vec4(double x, double y, double z, double w);

    vec4 operator+(const vec4& other) const;
    vec4 operator-(const vec4& other) const;
    double operator*(const vec4& other) const;
    vec4 operator*(double scalar) const;
    vec4 operator/(double scalar) const;
    double length() const;
};
/// <summary>
/// classe que implementa matriz 2d e seus metodos
/// </summary>
class mat2 {
public:
    double data[2][2];

    mat2();
    mat2(double a, double b, double c, double d);

    mat2 operator+(const mat2& other) const;
};
/// <summary>
/// classe que implementa matriz 3d e seus metodos
/// </summary>
class mat3 {
public:
    double data[3][3];

    mat3();
    mat3(double a, double b, double c, double d, double e, double f, double g, double h, double i);

    mat3 operator+(const mat3& other) const;
};
/// <summary>
/// classe que implementa matriz 4d e seus metodos
/// </summary>
class mat4 {
public:
    double data[4][4];

    mat4();
    mat4(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k, double l, double m, double n, double o, double p);

    mat4 operator+(const mat4& other) const;
};
/// <summary>
/// implementa a multiplicação de matriz 2d por vetor 2d
/// </summary>
/// <param name="m"></param>
/// <param name="v"></param>
/// <returns></returns>
vec2 operator*(const mat2& m, const vec2& v);

/// <summary>
/// implementa multiplicação de matriz 4d com vetor 4d
/// </summary>
/// <param name="m"></param>
/// <param name="v"></param>
/// <returns></returns>
vec4 operator*(const mat4& m, const vec4& v);

#endif // MATVEC_H

