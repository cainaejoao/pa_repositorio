#include<stdio.h>
int main(){
	int n;
	printf("Digite um numero para saber se ele eh positivo, negativo ou nulo: ");
	scanf("%d", &n);
	if(n>0)
	{
	printf("positivo");
	}
	else
	
	{
		if(n<0)
		{
		printf("negativo");
		}
		else
		{
			printf("nulo");
		}
	}
}
