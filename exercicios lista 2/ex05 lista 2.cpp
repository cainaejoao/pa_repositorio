#include<stdio.h>
int main(){
	float n1, n2, m;
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	m = (n1 + n2) / 2;
	if(m>=5){
	printf("%f - Voce esta aprovado", m);
	}
	else{
	printf("%f - Voce esta reprovado", m);
	}
}
