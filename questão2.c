#include <stdio.h>

int main(){
    int x, y, resultado;

    printf ("Multiplicação de números inteiros\n");

    printf ("Digite um número inteiro:\n");
    scanf ("%d", &x);
    printf ("Digite outro número inteiro:\n");
    scanf ("%d", &y);

    resultado = x * y;

    printf ("A multiplicação de %d * %d = %d\n", x, y, resultado);
}