#include<stdio.h>
int main(){
	float p, qmd, a, r;
	printf("Digite o preco do maco de cigarro: ");
	scanf("%f", &p);
	printf("Digite a quantidade de macos consumidos por dia: ");
	scanf("%f", &qmd);
	printf("Digite a quantidade de anos fumando: ");
	scanf("%f", &a);
	r = p * qmd * (a * 365);
	printf("Voce gastou %f com cigarros", r);
}
