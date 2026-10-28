#include<stdio.h>
void tabuada3(int a, int b, int c)
{
    for (int i = b; i <= c; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
	}
	}

int main()
{
	int a, b, c;
	printf("tabuada: \n");
	scanf("%d", &a);
	printf("inicio em: \n");
	scanf("%d", &b);
	printf("termina em: \n");
	scanf("%d", &c);
	tabuada3(a,b,c);
}