#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcion;

    do{
        printf("Dime un número de uno al cinco:\n");
        scanf(" %i", &opcion);
    }while(opcion<1 || opcion>5);

    return EXIT_SUCCESS;
}
