#include <stdio.h>
#include <stdlib.h>

#define TRI 1 
#define CUA 2
#define PAR 3
#define PEN 4 
#define CIR 5

int main(){

    unsigned opcion;

    system("toilet --gay -fpagga AREAS");

    printf(
            "Elige una figura:\n"
            "\n"
            "\t1. Triángulo.\n"
            "\t2. Cuadrado.\n"
            "\t3. Paralelogramo.\n"
            "\t4. Pentágono.\n"
            "\t5. Círculo.\n"
            "\n"
            "\tOpción: "
            );

    scanf(" %u", &opcion);

    switch(opcion){
        case 1:
            printf("▲");
            break;
    }
    switch(opcion){
         case 2:
            printf("■");
            break;
    }
    switch(opcion){
         case 3:
            printf("▰");
            break;
    }
    switch(opcion){
         case 4:
            printf("⬟");
            break;
    }
    switch(opcion){
         case 5:
            printf("●");
            break;
   }
    switch(opcion){
        default:
            printf("Del 1 al 5, cara anchoa.\n");
            break;
    }


    return EXIT_SUCCESS;
}
