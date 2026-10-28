#include <stdio.h>

int main() {
    int v[10];
    int positivos = 0;
    int negativos = 0;
    int zeros = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (v[i] > 0) {
            positivos++;
        } else if (v[i] < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);
}
