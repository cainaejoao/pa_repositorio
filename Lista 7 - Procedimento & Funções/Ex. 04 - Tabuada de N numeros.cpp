#include<stdio.h>
void tabuada2(int m, int v)
{
    for (int i = 1; i <= v; i++){
        printf("%d x %d = %d\n", m, i, m * i);
	}
	}

int main()
{
	int m, v;
	printf("numero da tabuada: \n");
	scanf("%d", &m);
	printf("multiplicador: \n");
	scanf("%d", &v);
	tabuada2(m,v);
}