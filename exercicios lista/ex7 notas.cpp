#include <stdio.h>

int main() {
    int valor, notas50, notas20, notas10;

    printf("Digite o valor do saque (multiplo de 10): ");
    scanf("%d", &valor);

    // Validação inicial
    if (valor % 10 != 0 || valor <= 0) {
        printf("Erro: O valor deve ser um multiplo positivo de 10.\n");
        return 1;
    }

    // Processamento das notas de 50
    notas50 = valor / 50;
    valor %= 50; // O que sobra vai para as próximas notas

    // Processamento das notas de 20
    notas20 = valor / 20;
    valor %= 20;

    // Processamento das notas de 10
    notas10 = valor / 10;

    // Exibição do resultado
    printf("Cedulas entregues:\n");
    if (notas50 > 0) printf("%d nota(s) de R$ 50\n", notas50);
    if (notas20 > 0) printf("%d nota(s) de R$ 20\n", notas20);
    if (notas10 > 0) printf("%d nota(s) de R$ 10\n", notas10);

    return 0;
}

