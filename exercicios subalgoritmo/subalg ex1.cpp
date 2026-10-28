#include<stdio.h>

float calcular_media(float n1, float n2, float n3){
	return (n1 + n2 + n3) / 3;
}

int main(){
	float num1, num2, num3, media;
	printf("Digite 3 numeros: ");
	scanf("%f", &num1);
	scanf("%f", &num2);
	scanf("%f", &num3);
	
	media = calcular_media(num1, num2, num3);
	printf("Media = %f \n", media);
	
	media = calcular_media(61, 67, 42);
	printf("Media = %f \n", media);
	
	printf("Media = %f", calcular_media(61, 67, 42));
}