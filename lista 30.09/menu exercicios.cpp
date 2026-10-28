#include <stdio.h>

int main(){
	int v[10];
    int n, opcao, contador;
    int encontrado = 0;
    
    do
    {
        printf("\n===== MENU =====\n");
        printf("0 - SAIR\n");
        printf("1 - Preencher vetor\n");
        printf("2 - Conferir valor\n");
        printf("3 - Elementos pares\n");
        printf("4 - Preencher com o mesmo valor\n");
        printf("5 - Exibir conteudo do vetor\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 0:
                break;

            case 1:
                for(int i = 0; i < 10; i++) {
                    printf("Posicao [%d]: ", i);
                    scanf("%d", &v[i]);
                }
                break;

            case 2:
            	printf("Digite o valor que deseja buscar: ");
                scanf("%d", &n);
                
                contador = 0; 
                for(int i = 0; i < 10; i++) {
                    if(v[i] == n) {
                        contador = 1;
                        break;
                    }
                }
                
                if(contador == 1) {
                    printf("Valor encontrado no vetor\n");
                } else {
                    printf("Valor nao encontrado no vetor\n");
                }
                break;

            case 3:
                contador = 0;
                for(int i = 0; i < 10; i++) {
                    if(v[i] % 2 == 0) {
                        contador++;
                    }
                }
                printf("Tem %d elementos pares no vetor\n", contador);
                break;

            case 4:
                scanf("%d", &n);
                for(int i = 0; i < 10; i++) {
                    v[i] = n;
                }
                printf("Valores: ");
                for(int i = 0; i < 10; i++) {
                    printf("%d ", v[i]);
                }
                printf("\n");
                break;

            case 5:
                for(int i = 0; i < 10; i++) {
                    printf("[%d]: %d\n", i, v[i]);
                }
                break;

            default:
                printf("\nOpcao invalida!\n\n");
        }

    } while(opcao != 0);
}