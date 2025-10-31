#include <stdio.h>
#include <string.h>

int main(){
    int ope;
    scanf("%d", &ope);
    int contador = 0;
    for(int i = 0; i < ope; i++){
        char sinal[50];
        scanf("%s", &sinal);
        if(strcmp(sinal, "X++")==0){
            contador++;
        }if(strcmp(sinal, "X--")==0){
            contador--;
        }
        
    }
    printf("%d\n", contador);
    return 0;
}