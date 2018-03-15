#include <stdio.h>
#include <stdlib.h>
void los_nombres_me_dan_igual(int *x, int *y){
    printf("Dame el primer numero: ");
    scanf(" %i", x);
    printf("Dame el segundo número: ");
    scanf(" %i", y);
    printf("Tus numeros que has guardado son: %i y %i\n", *x, *y);
}
int main(){
    int diego,mompo;
    los_nombres_me_dan_igual(&diego, &mompo);
    return EXIT_SUCCESS;
}
