#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define N 0xff

int main(){

    char array[N];
    char * array2 = NULL;
    int longitud;

    printf("Dime tu nombre:\n");
    fgets(array, N, stdin);

    longitud = strlen(array);

    array2 = (char *)malloc(longitud * sizeof(char));

    strncpy(array2, array, longitud-1);

    array2[longitud-1] = '\0';

    printf("Bienvenido MR. %s tiene tu nombre %i caracteres\n", array2, longitud-1);

    free(array2);

    return EXIT_SUCCESS;
}
