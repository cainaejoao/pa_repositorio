#include<stdio.h>
int main() {
    int n;
    int maior;
    printf("Digite 10 numeros:\n");
    scanf("%d", &n);
    maior = n;
    for (int i = 1; i < 10; ++i) {
        scanf("%d", &n);
        if (n > maior) {
            maior = n;
        }
    }
    printf("Saida: %d\n", maior);
}
