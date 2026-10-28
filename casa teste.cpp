#include <stdio.h>

// Subalgoritmo 1
void vetorInvertido(int v[])
{
    int i;

    printf("\nVetor invertido:\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }

    printf("\n\n");
}

// Subalgoritmo 2
void somaVetor(int v[])
{
    int i;
    int soma = 0;

    for(i = 0; i < 5; i++)
    {
        soma = soma + v[i];
    }

    printf("\nSoma = %d\n\n", soma);
}

// Subalgoritmo 3
void elementosPares(int v[])
{
    int i;

    printf("\nElementos pares:\n");

    for(i = 0; i < 5; i++)
    {
        if(v[i] % 2 == 0)
        {
            printf("%d ", v[i]);
        }
    }

    printf("\n\n");
}

// Subalgoritmo 4
void entreDezTrinta(int v[])
{
    int i;
    int contador = 0;

    for(i = 0; i < 5; i++)
    {
        if(v[i] >= 10 && v[i] <= 30)
        {
            contador++;
        }
    }

    printf("\nHa %d elementos entre 10 e 30.\n\n", contador);
}

// Subalgoritmo 5
void mediaVetor(float v[])
{
    int i;
    float soma = 0;
    float media;

    for(i = 0; i < 5; i++)
    {
        soma = soma + v[i];
    }

    media = soma / 5;

    printf("\nMedia = %.2f\n\n", media);
}

// Subalgoritmo 6
void maiorElemento(int v[])
{
    int i;
    int maior = v[0];

    for(i = 1; i < 5; i++)
    {
        if(v[i] > maior)
        {
            maior = v[i];
        }
    }

    printf("\nMaior valor = %d\n\n", maior);
}


// Programa principal
int main()
{
    int v[5];
    float notas[5];
    int i;
    int opcao;

    // Entrada do vetor inteiro
    printf("Digite 5 numeros inteiros:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }

    // Entrada das notas
    printf("\nDigite 5 numeros reais:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &notas[i]);
    }

    do
    {
        // Escrita do menu
        printf("\n===== MENU =====\n");
        printf("0 - SAIR\n");
        printf("1 - Exibir vetor invertido\n");
        printf("2 - Somar elementos do vetor\n");
        printf("3 - Exibir elementos pares\n");
        printf("4 - Contar elementos entre 10 e 30\n");
        printf("5 - Calcular media dos numeros reais\n");
        printf("6 - Exibir maior elemento\n");

        // Escolha da opcao
        printf("Escolha: ");
        scanf("%d", &opcao);

        // Seleciona o escolhido
        switch(opcao)
        {
            case 0:
                break;

            case 1:
                vetorInvertido(v);
                break;

            case 2:
                somaVetor(v);
                break;

            case 3:
                elementosPares(v);
                break;

            case 4:
                entreDezTrinta(v);
                break;

            case 5:
                mediaVetor(notas);
                break;

            case 6:
                maiorElemento(v);
                break;

            default:
                printf("\nOpcao invalida!\n\n");
        }

    } while(opcao != 0);

    return 0;
}