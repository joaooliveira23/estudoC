#include <stdio.h>

int main(){
    int media;
    int n;
    int contador = 0;
    scanf("%d %d",&n, &media);
    int notas[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &notas[i]);
    }

    for(int i = 0; i < n; i++){
        if(notas[i]>media){
            contador++;
        }
    }
    printf("%d\n", contador);
    return 0;
}