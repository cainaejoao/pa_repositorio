#include<stdio.h>
int main(){
	float n;
	printf("Digite a nota: ");
	scanf("%f", &n);
	if(n>=0 && n<=10)
	{
	printf("Nota valida");
	}
	else
	{
	printf("Nota invalida");
	}
}
