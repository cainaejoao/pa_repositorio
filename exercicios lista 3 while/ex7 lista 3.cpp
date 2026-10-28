#include <cstdio>
int main() {
    int n;
    int multi=1;
    int r;
    printf("Digite um numero: ");
    scanf("%d", &n);
    while (multi<=10){
        r=n*multi;
        printf("%d x %d = %d\n", n, multi, r);
        multi=multi+1;
    }
}
