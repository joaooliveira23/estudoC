#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    int quantidade;
    scanf("%d", &quantidade);
    
    for(int i = 0; i < quantidade; i++){
        scanf("%s", palavra);
        if(strlen(palavra) <= 10){
            printf("%s\n", palavra);
        }else{
            int tamanho = strlen(palavra);
            int abreviacao = tamanho - 2;
            char primeira = palavra[0];
            char ultima = palavra[tamanho - 1];
            printf("%c%d%c\n", primeira, abreviacao, ultima);
        }

    }
    return 0;
}