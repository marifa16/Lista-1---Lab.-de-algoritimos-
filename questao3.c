#include <stdio.h>

int main(){

    int nu;

    printf ("Digite um número inteiro:\n");
    scanf("%d", &nu);

    // Verificar se é par ou impar
    if (nu % 2 == 0){
        printf("O número %d é par\n", nu);
    } else{
        printf("O número %d é ímpar\n", nu);
    }
}