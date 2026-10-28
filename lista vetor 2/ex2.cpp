#include <stdio.h>

int main() {
    int v[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &v[i]);
    }
    int maior = v[0];
    for (int i = 1; i < 8; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    printf("Maior valor: %d\n", maior);
}
