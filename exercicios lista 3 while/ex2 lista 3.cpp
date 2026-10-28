#include<stdio.h>
int main(){
    int cont = 0, quant;
	printf("Digite a quantidade de vezes: ");
    scanf("%d", &quant); 
    while (cont < quant) {
        printf("Teste ");
        cont = cont + 1;
    }
}
