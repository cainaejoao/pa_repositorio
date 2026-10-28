#include <stdio.h>
int main() {
    int v[10];
    int pares = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            pares++;
        }
    }
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("\n");
}
