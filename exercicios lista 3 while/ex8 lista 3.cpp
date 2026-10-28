#include <cstdio>
int main() {
    int n, multi=1, r, multimax;
    printf("Digite os numeros: ");
    scanf("%d %d", &n, &multimax);
    while (multi<=multimax){
        r=n*multi;
        printf("%d x %d = %d\n", n, multi, r);
        multi=multi+1;
    }
}
