#include<stdio.h>
int main() {
    int n;
    int soma = 0;
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &n);
        if (n > 0) {
            soma += n;
        }
    }
    printf("Saida: %d\n", soma);
}
