#include<stdio.h>
void multiplos(int m){
  printf("Os proximos 10 multiplos sao:\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d ", m * i);
	}
	}

int main(){
	int a;
	printf("Digite um numero para saber seus multiplos\n");
	scanf("%d", &a);
	multiplos(a);
}