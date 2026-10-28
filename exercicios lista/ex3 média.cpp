#include<stdio.h>
int main(){
	int n1, n2, n3, n4;
	float m;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	printf("Digite o quarto numero: ");
	scanf("%d", &n4);
	m = (n1 + n2 + n3 + n4) / 4;
	printf("A media dos numeros eh: %f", m);
}
