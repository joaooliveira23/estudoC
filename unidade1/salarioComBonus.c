#include <stdio.h>

int main(){
    float salario, bonus;

    scanf("%f %f", &salario, &bonus);

    float novo_salario = salario + (salario * (bonus/100));

    printf("%.1f\n", novo_salario);
}