#include <stdio.h>

int main(){
    float n1, n2, n3, media;

    printf ("Digite sua primeira nota:\n");
    scanf ("%f", &n1);
    printf ("Digite sua segunda nota:\n");
    scanf ("%f", &n2);
    printf ("Digite sua terceira nota:\n");
    scanf ("%f", &n3);

    // Calcular a média 
    media = (n1 + n2 + n3)/ 3;

    if (media >= 7){
        printf ("Aprovado com a média %.2f\n", media);
    } else {
        printf ("Reprovado com a média %.2f\n", media);
    }
}