#include <stdio.h>

int eh_triangulo(int a, int b, int c) {
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        return 1;
    }
    return 0;
}

int main() {
    int n1, n2, n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    int resultado = eh_triangulo(n1, n2, n3);
    if (resultado == 1) {
        printf("\n1");
    } else {
        printf("\n0");
    }
}