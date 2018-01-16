#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define MAX 3

int main(){
    int numero;
    int oportunidades = MAX;

    printf("Dime un número del 1 al 3: ");
    scanf("%i", &numero);
    do {
        __fpurge(stdin);
        printf("Introducide un número válido:.\n");
        printf("Dime un número del 1 al 3: ");
        scanf("%i", &numero);
        oportunidades--;
    } while((numero<1 || numero>3) && oportunidades);

    printf("Se te han agotado las opciones. ¡¡¡AL CARRERRRRRRRRRR!!!.\n");

    return EXIT_SUCCESS;
}
