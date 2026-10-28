#include<stdio.h>
void exibe_n_multiplos(int valor, int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", valor * i);
    }
    printf("\n");
}