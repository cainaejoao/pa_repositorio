#include<stdio.h>
int main() {
    int voto;
    int huguinho = 0, zezinho = 0, luizinho = 0, nulos = 0;
    int total_votos = 0;
    printf("Digite o voto (1-Huguinho, 2-Zezinho, 3-Luizinho, 0-Encerrar):\n");
    while (true) {
        scanf("%d", &voto);
        if (voto == 0) {
            break;
        }
        total_votos++;
        if (voto == 1) {
            huguinho++;
        } else if (voto == 2) {
            zezinho++;
        } else if (voto == 3) {
            luizinho++;
        } else {
            nulos++;
        }
    }
    printf("\n--- RESULTADO DA ELEICAO ---\n");
    printf("Total de eleitores: %d\n\n", total_votos);
    if (total_votos > 0) {
        printf("1 - Huguinho: %d votos (%.2f%%)\n", huguinho, (huguinho * 100.0) / total_votos);
        printf("2 - Zezinho:  %d votos (%.2f%%)\n", zezinho, (zezinho * 100.0) / total_votos);
        printf("3 - Luizinho: %d votos (%.2f%%)\n", luizinho, (luizinho * 100.0) / total_votos);
        printf("Votos Nulos:  %d votos (%.2f%%)\n", nulos, (nulos * 100.0) / total_votos);
    } else {
        printf("Nenhum voto foi registrado.\n");
    }
}
