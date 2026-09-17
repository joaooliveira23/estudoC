#include <stdio.h>

int main(){
    int a, b, resultado, resto;

    scanf("%d %d", &a, &b);

    resultado = a / b;
    resto = a % b;
    printf("%d\n", resultado);
    printf("%d\n", resto);
}