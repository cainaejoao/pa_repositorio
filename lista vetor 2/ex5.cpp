#include<stdio.h>

int main() {
    int v[10];
    int numeroProcurado;
    int encontrado = 0; 
    int posicao = -1; 
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d", &numeroProcurado);
    for (int i = 0; i < 10; i++) {
        if (v[i] == numeroProcurado) {
            encontrado = 1;
            posicao = i;
            break;
        }
    }
    if (encontrado) {
        printf("O numero %d foi encontrado na posicao %d.\n", numeroProcurado, posicao);
    } else {
        printf("O numero %d nao foi encontrado.\n", numeroProcurado);
    }
}
