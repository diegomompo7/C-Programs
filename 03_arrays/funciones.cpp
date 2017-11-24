#include <stdio.h>
#include <stdlib.h>

#define N 0X100

int main(){

    const char  *p = "The world is"; // Constante tipo cadena
    /* Pequeña lecciçon sobre unpuntero */
    char const  *p; // Forma coherente de decir que el char es const
    char * const p; // Puntero constante (fijo)
    char const * const p; // Puntero fijo a una constante.

    char frase[N]; = "a vampire.\n"; // Inicialización
    char *d= frase;
    
    d = &frase[2];
    printf(" d ocupa %lu bytes.\n", sizeof (d));

    frase[2] == 'v';  //Notación de matrices
    *d == 'v';  //Notación de punteros 

   //  Puntero: Es una variable que contiene una dirección de memoria.



    return EXIT_SUCCESS;
}
