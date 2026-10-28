#include<stdio.h>
int main(){
	float av1, av2, av3, m;
	printf("Digite as 3 notas: ");
	scanf("%f %f %f", &av1, &av2, &av3);
	if(av1<=av2 && av1<=av3){
		m=(av2+av3)/2;
	}
	else{
		if(av2<=av1 && av2<=av3){
			m=(av1+av3)/2;
		}
		else{
			m=(av1+av2)/2;
		}
	}
	if(m<6){
		printf("%f - Reprovado", m);
	}
	else{
		printf("%f - Aprovado", m);
	}
	printf("Saida: %.2f\n", inss);
}
