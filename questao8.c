#include <stdio.h>

int main(){
    char s;

    printf ("Digte algum caractere(@, #, $, %, etc):\n");
    scanf ("%c", &s);

    printf ("O caractere foi: [%c]\n",s);
}