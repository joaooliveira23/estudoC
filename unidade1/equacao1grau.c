#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    float x = -(float)b / a;

    printf("%.2f\n", x);
}
