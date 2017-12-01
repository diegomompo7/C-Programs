#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre [256];
    char apellido1 [256];
    char apellido2 [256];

nombre: color: FF0000;

    printf ("Dime tu nombre: ");
    scanf (" %s", nombre);
    printf ("Dime tu primer apellido: ");
    scanf (" %s", apellido1);
    printf ("Dime tu segundo apellido: ");
    scanf (" %s", apellido2);
    printf ( "Hola %s %s %s.\n" , nombre, apellido1, apellido2 );
  return EXIT_SUCCESS;
}
