#include <stdio.h>

int main(){
    float peso, altura;
    scanf("%f %f", &peso, &altura);

    float imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("baixo\n");
    }else if(imc < 24.9){
        printf("normal\n");
    }else{
        printf("alto\n");
    }
}