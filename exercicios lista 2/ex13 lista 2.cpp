#include <stdio.h>
int main() {
    float salario, inss, ir, liquido;
    printf("Digite o salario bruto: ");
    scanf("%f", &salario);
    if (salario <= 1247.70) {
        inss = salario * 0.08;
    }
    else if (salario <= 2079.50) {
        inss = salario * 0.09;
    }
    else if (salario <= 4159.00) {
        inss = salario * 0.11;
    }
    else {
        inss = 468.00;
    }
    if (salario <= 1710.78) {
        ir = 0;
    }
    else if (salario <= 2563.91) {
        ir = salario * 0.075;
    }
    else if (salario <= 3418.59) {
        ir = salario * 0.15;
    }
    else if (salario <= 4271.59) {
        ir = salario * 0.225;
    }
    else {
        ir = salario * 0.275;
    }
    liquido = salario - inss - ir;
    printf("Resultados: %.2f %.2f %.2f %.2f\n", salario, inss, ir, liquido);
}