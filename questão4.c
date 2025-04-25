#include <stdio.h>

int main(){

    int x, y;

    printf ("Digite um número inteiro:\n");
    scanf ("%d", &x);
    printf ("Digite outro número inteiro:\n");
    scanf ("%d", &y);

    if (x == y){
        printf ("Eles são iguais\n");
    } else if (x > y){
        printf ("%d > %d\n", x, y);
    } else{
        printf ("%d < %d\n", x, y);
    }
}