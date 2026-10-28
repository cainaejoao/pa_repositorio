#include<stdio.h>
int main(){
	int cont, quant;
	printf("Digite a quantidade do inicio e do fim: ");
    scanf("%d", &cont); 
    scanf("%d", &quant); 
	while(cont<=quant){
		printf("%d ", cont);
		cont=cont+1;
	}
}
