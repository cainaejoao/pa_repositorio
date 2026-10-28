#include <stdio.h>

// Função que verifica se três lados formam um triângulo
int eh_triangulo(int a, int b, int c) {
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        return 1;
    }
    return 0;
}