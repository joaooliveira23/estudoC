#include <stdio.h>

int main(){
    int jogos;
    scanf("%d", &jogos);
    int petya, vasya, tonya;
    int contador = 0;
    for(int i = 0; i<jogos;i++){
        scanf("%d %d %d", &petya, &vasya, &tonya);
        int soma = petya + vasya + tonya;
        if(soma>=2){
            contador++;
        }
    }
    printf("%d\n", contador);
    return 0;

}