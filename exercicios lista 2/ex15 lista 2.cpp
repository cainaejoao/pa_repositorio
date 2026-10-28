#include <stdio.h>
int main() {
	int a, b, c;
	printf("Digite 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c) {
        printf("3 numeros iguais\n");
    }
    else if (a == b || a == c || b == c) {
        printf("2 dos 3 sao iguais\n");
    }
    else {
        printf("3 numeros diferentes\n");
    }
}