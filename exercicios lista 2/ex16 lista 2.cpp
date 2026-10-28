#include <stdio.h>
int main() {
    float salario, convenio;
    int sexo, idade;
    scanf("%f %d %d", &salario, &sexo, &idade);
    if (sexo == 1) {

        if (idade <= 20 || idade > 40) {
            convenio = salario * 0.0534;
        }
        else {
            convenio = salario * 0.0844;
        }
    }
    else if (sexo == 2) {

        if (idade <= 20 || idade > 40) {
            convenio = salario * 0.0356;
        }
        else {
            convenio = salario * 0.0643;
        }
    }
    printf("Valor do convenio: R$ %.2f\n", convenio);

}