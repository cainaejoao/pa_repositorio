#include<stdio.h>
int main(){
	float k, l, r;
	printf("Digite a quantidade de km: ");
	scanf("%f", &k);
	printf("Digite a quantidade de litros: ");
	scanf("%f", &l);
	r = k / l;
	printf("O carro percorreu %f km/l", r);
}
