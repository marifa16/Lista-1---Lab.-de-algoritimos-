#include <stdio.h>

int main(){
    int n, r;

    printf ("Digite um númro :\n");
    scanf ("%d", &n);

    // Tabuada 
    printf ("Tabuada de %d\n", n);

    for (r = 1; r <= 10; r++){
        printf ("%d x %d = %d\n", n, r, n * r);
    }
}