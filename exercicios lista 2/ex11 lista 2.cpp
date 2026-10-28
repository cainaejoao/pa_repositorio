#include<stdio.h>
int main(){
	float salario, inss;
	printf("Digite o salario para saber quanto pagara de INSS: ");
	scanf("%f", &salario);
	if (salario <= 1247.70) {
        inss = salario * 0.08;
    }
    else{
		if (salario <= 2079.50) {
        inss = salario * 0.09;
    	}
    	else{
			if (salario <= 4159.00) {
        	inss = salario * 0.11;
    		}
    		else {
        	inss = 468.00;
    		}
    	}
    }
    printf("INSS: %.2f\n", inss);
}