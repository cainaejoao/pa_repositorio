#include<stdio.h>
int main(){
	int cont = 1, quant;
	printf("Digite a quantidade de vezes: ");
    scanf("%d", &quant); 
	while(cont<=quant){
		printf("%d ", cont);
		cont=cont+1;
	}
}
