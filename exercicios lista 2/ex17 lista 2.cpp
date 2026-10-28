#include <stdio.h>
int main() {
    float prova1, prova2, mediaProvas, av1;
    int a1, a2, a3, a4, somaAtividades;
    scanf("%f %f %d %d %d %d",
          &prova1, &prova2,
          &a1, &a2, &a3, &a4);
    mediaProvas = ((prova1 + prova2) / 2) * 0.6;
    somaAtividades = a1 + a2 + a3 + a4;
    av1 = mediaProvas + somaAtividades;
    if (av1 > 6.0) {
        printf("AV1 = %.1f, voce esta acima da media.\n", av1);
    }
    else if (av1 == 6.0) {
        printf("AV1 = %.1f, voce esta na media.\n", av1);
    }
    else {
        printf("AV1 = %.1f, voce esta abaixo da media.\n", av1);
    }
}