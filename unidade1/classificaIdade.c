#include <stdio.h>

int main(){
    int idade;
    scanf("%d", &idade);

    if(idade < 12){
        printf("crianca\n");
    }else if(idade < 18){
        printf("adolescente\n");
    }else{
        printf("adulto\n");
    }
}