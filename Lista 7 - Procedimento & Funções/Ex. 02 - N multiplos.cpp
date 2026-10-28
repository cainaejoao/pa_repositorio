#include<stdio.h>
void Nmultiplos(int m, int v)
{
  printf("Os proximos %d numeros eh:\n ",v);
    for (int i = 1; i <= v; i++) {
        printf("%d\n ", m * i);
	}
	}

int main()
{
	int a, b;
	printf("Digite qual numero voce quer saber os multiplos: \n");
	scanf("%d", &a);
	printf("Digite quantos multiplos voce quer saber: \n");
	scanf("%d", &b);
	Nmultiplos(a,b);
}