#include <stdio.h>

int main(){
    int a;

    scanf("%d", &a);
    int resto = a % 2;

    if(resto == 0){
        printf("par\n");
    }else{
        printf("impar\n");
    }
}