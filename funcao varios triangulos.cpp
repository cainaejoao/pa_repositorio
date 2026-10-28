#include <stdio.h>
int ehEquilatero(float a, float b, float c) {
    if (a == b && b == c) {
        return 1;
    }
    return 0;
}
int ehIsosceles(float a, float b, float c) {
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
        return 1;
    }
    return 0;
}
int ehEscaleno(float a, float b, float c) {
    if (a != b && b != c && a != c) {
        return 1;
    }
    return 0;
}

int main() {
    float n1, n2, n3;
    printf("Digite o primeiro lado: ");
    scanf("%f", &n1);
    printf("Digite o segundo lado: ");
    scanf("%f", &n2);
    printf("Digite o terceiro lado: ");
    scanf("%f", &n3);
    
    if ((n1 + n2 > n3) && (n1 + n3 > n2) && (n2 + n3 > n1)) {
        
        if (ehEquilatero(n1, n2, n3)) {
            printf("Triangulo Equilatero.\n");
        } 
        else if (ehIsosceles(n1, n2, n3)) {
            printf("Triangulo Isosceles.\n");
        } 
        else if (ehEscaleno(n1, n2, n3)) {
            printf("Triangulo Escaleno.\n");
        }
    } else {
        printf("Os valores nao formam um triangulo.\n");
    }
}
