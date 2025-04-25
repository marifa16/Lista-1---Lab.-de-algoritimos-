#include <stdio.h>

int main(){

    char l,e;
    int n;

    printf ("SENHA\n");
    printf ("Digite um símbolo especial:\n");
    scanf ("%c", &e);
    printf ("Digite um número:\n");
    scanf ("%d", &n);
    printf ("Digite uma letra:\n");
    scanf ("%s", &l);

    printf ("Sua senha é: %c%d%s\n", e, n, l);
}