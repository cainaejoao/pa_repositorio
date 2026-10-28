#include<stdio.h>

void exercicio1(int v[])
{
	printf("\nPrimeiro elemento: %d\n\n", v[0]);
}

void exercicio2(int v[])
{
	printf("\nUltimo elemento: %d\n\n", v[4]);
}

int main(){
	int v[5] = {45, 56, 67, 56, 34};
	int opcao;
	do
	{	// Escrita do menu
		printf("0 - SAIR\n");
		printf("1 - Exibir o primeiro elemento\n");
		printf("2 - Exibir o ultimo elemento\n");
		// Esolha da opcao
		printf("Escolha: ");
		scanf("%d", &opcao); // 2
		
		// Seleciona o escolhido
		switch (opcao)
		{
			case 0:
				break;
			case 1:
				exercicio1(v);
				break;
			case 2:
				exercicio2(v);
				break;
				
		}
		
	}while (opcao != 0);
}