#include <stdio.h>
int main() {
    int v[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
    }
    printf("Vetor invertido:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
