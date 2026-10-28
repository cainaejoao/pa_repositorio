#include<stdio.h>
int main(){
	int v, s, n;
	s=0;
	for(v=1;v<=5;v++){
		scanf("%d", &n);
		s=s+n;
	}
	printf("%d", s);
}
