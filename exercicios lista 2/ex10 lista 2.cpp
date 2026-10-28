#include<stdio.h>
int main(){
	int n1, n2, n3;
	printf("Digite os 3 numeros: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if(n1<=n2 && n3<=n2){
		printf("%d", n2);
	}
	else{
		if(n2<=n1 && n3<=n1){
			printf("%d", n1);
		}
		else{
			printf("%d", n3);
		}
	}
}
