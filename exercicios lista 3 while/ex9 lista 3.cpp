#include<stdio.h>
int main(){
	int inicio, fim;
	printf("Digite a quantidade do inicio e do fim: ");
    scanf("%d", &inicio); 
    scanf("%d", &fim); 
    if(inicio<=fim){
	while(inicio<=fim){
		printf("%d ", inicio);
		inicio=inicio+1;
	}
	}
	else{
	while(inicio>=fim){
		printf("%d ", inicio);
		inicio=inicio-1;
	}
	}
}
