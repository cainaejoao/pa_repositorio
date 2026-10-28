#include<stdio.h>
void exibe_10_multiplos(int valor) {
    for (int i = 1; i <= 10; i++) {
        printf("%d ", valor * i);
    }
    printf("\n");
}