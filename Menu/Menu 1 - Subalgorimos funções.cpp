#include<stdio.h>
#include"subprocedimentos.h"
#include<stdlib.h>
// Programa principal
int main()
{

	int opcao, a, b, c;
	
	do
	{
		system("cls");
		printf("\n---- M E N U ----\n");
		printf("1 - Multiplos\n");
		printf("2 - Quantidade de multiplos\n");
		printf("3 - Tabuada\n");
		printf("4 - Tabuada com fim\n");
		printf("5 - Tabuada com inicio e fim\n");
		printf("0 - Fim\n");
		printf("Escolha: ");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 0:
				break;
				
			case 1:
			printf("Digite um numero para saber seus multiplos\n");
			scanf("%d", &a);
			multiplos(a);
				break;
			
			case 2:
			printf("Digite qual numero voce quer saber os multiplos: \n");
			scanf("%d", &a);
			printf("Digite quantos multiplos voce quer saber: \n");
			scanf("%d", &b);
			Nmultiplos(a,b);
				break;
				
			case 3:
			printf("Digite um numero para saber sua tabuada\n");
			scanf("%d", &a);
			tabuada(a);	
				break;
				
			case 4:
			printf("numero da tabuada: \n");
			scanf("%d", &a);
			printf("multiplicador: \n");
			scanf("%d", &b);
			tabuada2(a,b);
				break;
					
			case 5:
			printf("tabuada: \n");
			scanf("%d", &a);
			printf("inicio em: \n");
			scanf("%d", &b);
			printf("termina em: \n");
			scanf("%d", &c);
			tabuada3(a,b,c);
			
			default:
				printf("Opcao invalida!");
		}
		printf("\n");
		
		system("pause");
		
	}while (opcao != 0); // O usuario que prosseguir
	
}
	
	
	
	
	
	
	/*
	printf("\n4. Proximo numero = %d", prox_num(5));
	printf("\n5. Proximo par = %d", prox_num_par(8));
	printf("\n6. Maior entre 2n = %.1f", maior_2n(8, 55));
	printf("\n7. Menor entre 3n = %.1f", menor_3n(8, 67, 55));
	8. Calcular o fatorial: fatorial(4)    4. 3 . 2.1 = 24
	9: calcular a potencia: potencia(2, 3) 2 . 2 . 2 = 8
	*/
