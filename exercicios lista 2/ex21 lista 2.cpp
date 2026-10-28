#include <stdio.h>
int main() {
    int ano;
    scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) ||
        (ano % 400 == 0)) {
        printf("E ano bissexto\n");
    }
    else {
        printf("Nao e ano bissexto\n");
    }
}