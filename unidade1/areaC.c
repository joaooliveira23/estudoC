#include <stdio.h>

int main(){
    float pi = 3.14159;
    float area, raio;

    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("%.2f\n", area);
}