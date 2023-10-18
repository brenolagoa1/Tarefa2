#include "pch.h"
#include "../Tarefa2/matvec.h"


TEST(Vec2Test, ConstructorsAndOperations) {
    // Teste do construtor padrão
    vec2 v1;
    EXPECT_DOUBLE_EQ(v1.x, 0.0);
    EXPECT_DOUBLE_EQ(v1.y, 0.0);

    // Teste do construtor com parâmetros
    vec2 v2(1.0, 2.0);
    EXPECT_DOUBLE_EQ(v2.x, 1.0);
    EXPECT_DOUBLE_EQ(v2.y, 2.0);

    // Teste da operação de adição
    vec2 sum = v1 + v2;
    EXPECT_DOUBLE_EQ(sum.x, 1.0);
    EXPECT_DOUBLE_EQ(sum.y, 2.0);

    // Teste da operação de subtração
    vec2 diff = v2 - v1;
    EXPECT_DOUBLE_EQ(diff.x, 1.0);
    EXPECT_DOUBLE_EQ(diff.y, 2.0);

    // Teste da operação de produto escalar
    double dot = v1 * v2;
    EXPECT_DOUBLE_EQ(dot, 0.0);

    // Teste da operação de multiplicação por escalar
    vec2 product = v2 * 2.0;
    EXPECT_DOUBLE_EQ(product.x, 2.0);
    EXPECT_DOUBLE_EQ(product.y, 4.0);

    // Teste da operação de divisão por escalar
    vec2 division = v2 / 2.0;
    EXPECT_DOUBLE_EQ(division.x, 0.5);
    EXPECT_DOUBLE_EQ(division.y, 1.0);

    // Teste do cálculo do comprimento do vetor
    double length = v2.length();
    EXPECT_DOUBLE_EQ(length, 2.23606797749979);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}