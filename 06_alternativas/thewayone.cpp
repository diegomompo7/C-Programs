#include <stdio.h>
#include <stdlib.h>

int main(){

    int bit1, bit2;
    // Declara y pregunta si es 0 o 1
    printf("bit1: " );
    scanf(" %i ", &bit1);

     if(bit1 !=1 && bit1 !=0) {
        printf("Debe introducir un 0 o un 1: ");
        scanf(" %i", &bit1);     
     }
     
     printf("bit2: " );
     scanf(" %i", &bit2);
     
     if(bit2 !=1 && bit2 !=0) {
         printf("Debe introducir un 0 o un 1: ");
         scanf(" %i ", &bit2);     
     }
     
     if (bit1 == 0 && bit2 == 0) {
          printf("El usuario a introducido el numero 0.\n");
     }
      
     if (bit1 == 0 && bit2 == 1) {
          printf("El usuario a introducido el numero 2.\n");
     }

     if (bit1 == 1 && bit2 == 0) {
         printf("El usuario a introducido el numero 1.\n");
     }

     if (bit1 == 1 && bit2 == 1) {
         printf("El usuario a introducido el numero 3.\n");

     }

    return EXIT_SUCCESS;
}
