#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>


#define N 0x100

//Crear una lista de palabras
//Pedimos al usuario cuantas palabras quiere meter
//pedirle que meta las palabras
//las palabras que mete habra que realojarlas y reservarlas memoria
//para reservarlas memoria habra que saber su longitud
//copiarlas de donde se han pedido y que ultimo caraacter que se coja sea eel '\0'
//se imprimen las palabras+
//se liberan las direcciones de memoria
int main(){

    int numero_palabras;
    char buffer[N];
    char **lista = NULL;
    int longitud;
    printf("Cuantas palabras quieres: ");
    scanf(" %i", &numero_palabras);

    for(int contador_palabras = 0; contador_palabras<numero_palabras; contador_palabras++){
    __fpurge(stdin);
    printf("Palabra: ");
    fgets(buffer,N, stdin);

    lista = (char **) realloc(lista, contador_palabras * sizeof(char *));

    longitud = strlen(buffer);

   *(lista + contador_palabras) = (char *) malloc(longitud * sizeof(char));

   strncpy(*(lista + contador_palabras), buffer, longitud);

   *(*(lista + contador_palabras) + longitud - 1) = '\0';
 }
    for(int contador_palabras = 0; contador_palabras<numero_palabras; contador_palabras++)
        printf("%s\n", *(lista + contador_palabras));

    for(int contador_palabras = 0; contador_palabras<numero_palabras; contador_palabras++)
       free(*(lista + contador_palabras));
free(lista);
    return EXIT_SUCCESS;
}
