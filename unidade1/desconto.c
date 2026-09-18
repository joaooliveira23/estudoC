#include <stdio.h>

int main(){
    float valor, desconto;

    scanf("%f %f", &valor, &desconto);

    float valor_final = valor - (valor * (desconto/100));

    printf("%.1f\n", valor_final);
}