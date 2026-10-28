#include <stdio.h>
int main() {
    int a, b, c, meio;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b || a == c || b == c) {
        printf("Os numeros nao sao diferentes\n");
    }
    else {
        if ((a > b && a < c) || (a < b && a > c)) {
            meio = a;
        }
        else if ((b > a && b < c) || (b < a && b > c)) {
            meio = b;
        }
        else {
            meio = c;
        }
        printf("%d\n", meio);
    }
}