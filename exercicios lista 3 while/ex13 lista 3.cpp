#include<stdio.h>
int main() {
    int n;
    int soma = 0;
    printf("Digite os numeros (digite 0 para sair):\n");
    while (true) {
        scanf("%d", &n);
        if (n == 0) {
            break; 
        }
        if (n >= 35 && n <= 55) {
            soma += n;
        }
    }
    printf("Saida: %d\n", soma);
}
