#include<stdio.h>
int main(){
	int n, r;
	printf("Escreva um numero inteiro para descobrir seu cubo: ");
	scanf("%d", &n);
	r = n * n * n;
	printf("O cubo de %d eh %d", n, r);
}	
