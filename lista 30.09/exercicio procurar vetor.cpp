#include<stdio.h>

int main(){
	int v[10] = {45, 56, 67, 56, 34, 88, 63, 90, 22, 4};
    int n;
    int encontrado = 0;

    printf("Digite um valor inteiro para buscar no vetor: ");
    scanf("%d", &n);

    for(int i = 0; i < 10; i++) {
        if(v[i] == n) {
            encontrado = 1;
            break;
        }
    }

    if(encontrado == 1) {
        printf("O valor %d ta no vetor\n", n);
    } else {
        printf("O valor %d nao ta no vetor\n", n);
    }
}
