#include<stdio.h>
int main(){
	int cont, meio, quant;
	printf("Digite a quantidade do inicio e do fim: ");
    scanf("%d", &cont); 
    scanf("%d", &quant); 
    meio=cont+1;
	while(meio<quant){
		printf("%d ", meio);
		meio=meio+1;
	}
}
