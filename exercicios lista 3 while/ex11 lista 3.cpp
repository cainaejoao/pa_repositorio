#include<stdio.h>
int main() {
    int n, cont_vag=0, quant_par=0;
    printf("Digite dez numeros: ");
    while (cont_vag<10) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            quant_par=quant_par+1;
        }
        cont_vag=cont_vag+1;
    }
    printf("%d", quant_par);
    return 0;
}

