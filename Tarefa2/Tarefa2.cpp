#include <iostream>
#include <cmath>
#include "matvec.h"

/**
 * @brief Esta função imprimir vetores 2D
 * @param out saida da stream do vetor
 * @param v o vetor que sera impresso
 * @return retorna o vetor que será impresso
*/
std::ostream& operator<<(std::ostream& out, const vec2& v) {
    out << "[" << v.x << ", " << v.y << "]";
    return out;
}

/**
 * @brief Esta função imprimir vetores 4D
 * @param out saida da stream do vetor
 * @param v o vetor que sera impresso
 * @return retorna o vetor que será impresso
*/
std::ostream& operator<<(std::ostream& out, const vec4& v) {
    out << "[" << v.x << ", " << v.y << ", " << v.z << ", " << v.w << "]";
    return out;
}

/**
 * @brief Esta função imprimir matriz 2D
 * @param out saida da stream do matriz
 * @param v o matriz que sera impresso
 * @return retorna o matriz que será impresso
*/
std::ostream& operator<<(std::ostream& out, const mat2& m) {
    out << "[" << m.data[0][0] << ", " << m.data[0][1] << "]\n";
    out << "[" << m.data[1][0] << ", " << m.data[1][1] << "]";
    return out;
}

/**
 * @brief Esta função imprimir matriz 3D
 * @param out saida da stream do matriz
 * @param v o matriz que sera impresso
 * @return retorna o matriz que será impresso
*/
std::ostream& operator<<(std::ostream& out, const mat3& m) {
    out << "[" << m.data[0][0] << ", " << m.data[0][1] << ", " << m.data[0][2] << "]\n";
    out << "[" << m.data[1][0] << ", " << m.data[1][1] << ", " << m.data[1][2] << "]\n";
    out << "[" << m.data[2][0] << ", " << m.data[2][1] << ", " << m.data[2][2] << "]";
    return out;
}

/**
 * @brief Esta função imprimir matriz 4D
 * @param out saida da stream do matriz
 * @param v o matriz que sera impresso
 * @return retorna o matriz que será impresso
*/
std::ostream& operator<<(std::ostream& out, const mat4& m) {
    out << "[" << m.data[0][0] << ", " << m.data[0][1] << ", " << m.data[0][2] << ", " << m.data[0][3] << "]\n";
    out << "[" << m.data[1][0] << ", " << m.data[1][1] << ", " << m.data[1][2] << ", " << m.data[1][3] << "]\n";
    out << "[" << m.data[2][0] << ", " << m.data[2][1] << ", " << m.data[2][2] << ", " << m.data[2][3] << "]\n";
    out << "[" << m.data[3][0] << ", " << m.data[3][1] << ", " << m.data[3][2] << ", " << m.data[3][3] << "]";
    return out;
}


int main() {
    /// Teste de vetores 2D
    vec2 a(1.0, 2.0);
    vec2 b(3.0, 4.0);
    vec2 sum = a + b;
    vec2 product = a * 2.0;

    std::cout << "Vec2 Test:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;

    /// Teste de vetores 4D
    vec4 c(1.0, 2.0, 3.0, 4.0);
    vec4 d(5.0, 6.0, 7.0, 8.0);
    vec4 sum2 = c + d;
    vec4 product2 = c * 2.0;

    std::cout << "Vec4 Test:" << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "Sum: " << sum2 << std::endl;
    std::cout << "Product: " << product2 << std::endl;

    mat2 m2_example(1, 2, 3, 4);
    mat3 m3_example(1, 2, 3, 4, 5, 6, 7, 8, 9);
    mat4 m4_example(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);

    /// Vetores de exemplo
    vec2 v2_example(2, 3);
    vec4 v4_example(1, 2, 3, 4);

    /// Operações de soma de matrizes
    mat2 sum_mat2 = m2_example + m2_example;
    mat3 sum_mat3 = m3_example + m3_example;
    mat4 sum_mat4 = m4_example + m4_example;

    /// Operações de multiplicação de matriz por vetor
    vec2 result_vec2 = m2_example * v2_example;
    vec4 result_vec4 = m4_example * v4_example;

    // Impressão dos resultados
    std::cout << "Soma de matrizes 2x2:\n" << sum_mat2 << "\n";
    std::cout << "Soma de matrizes 3x3:\n" << sum_mat3 << "\n";
    std::cout << "Soma de matrizes 4x4:\n" << sum_mat4 << "\n";
    std::cout << "Multiplicação matriz 2x2 por vetor:\n" << result_vec2 << "\n";
    std::cout << "Multiplicação matriz 4x4 por vetor:\n" << result_vec4 << "\n";

    return 0;
}

