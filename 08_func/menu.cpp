#include <stdio.h>
#include <stdlib.h>

void menu(int *opcion) {
printf("Opiniones de diego sobre personas.\n");
    printf("1. Videos de diego.\n");
    printf("2. Lista de deseos de diego.\n");
    printf("3. Contactar con diego.\n");
    printf("Eliga unaopción.\n");
    scanf("%i", opcion);

int main(){

    int opcion;
    menu(opcion);
    printf("Ha elegido la opción %i.\n", opcion);

    return EXIT_SUCCESS;}
