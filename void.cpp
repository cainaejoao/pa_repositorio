#include<stdio.h>
float somar_2n(float n1, float n2){
	return n1+n2;
}
void saudacao(){
	printf("\nvai toma no cu pedro pires");
}
void saudacao2(int hora){
	if(hora<12)
		printf("\nvai toma no cu pedro pires e bom dia");
	else if(hora<18)
		printf("\nvai toma no cu pedro pires e boa tarde");
	else 
		printf("\nvai toma no cu pedro pires e boa noite");
}
int main(){
	printf("%f", somar_2n(7,8));
	saudacao();
	saudacao2(8);
	printf("\nFIM");
}