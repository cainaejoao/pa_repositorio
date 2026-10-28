#include<stdio.h>
void tabuada(int m){
  printf("A tabuada desse numero eh:\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", m, i, m * i );
	}
	}

int main(){
	int a;
	printf("Digite um numero para saber sua tabuada\n");
	scanf("%d", &a);
	tabuada(a);
}