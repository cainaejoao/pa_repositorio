#include <stdio.h>

int main() {
    float v[5];
    float soma = 0.0;
    float media;

    for (int i = 0; i < 5; i++) {
        scanf("%f", &v[i]);
    }
    for (int i = 0; i < 5; i++) {
        soma += v[i];
    }
    media = soma / 5.0;
    printf("Media: %.2f\n", media);
}
