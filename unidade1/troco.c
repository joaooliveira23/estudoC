#include <stdio.h>

int main(){
    float preco, valor, troco;

    scanf("%f %f", &preco, &valor);

    troco = preco - valor;

    printf("%.2f\n", troco);
}