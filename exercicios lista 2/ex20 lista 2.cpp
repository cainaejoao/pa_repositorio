#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) &&
        (a + c > b) &&
        (b + c > a)) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        }
        else {
            printf("Triangulo Escaleno\n");
        }
    }
    else {
        printf("Nao forma um triangulo\n");
    }
}