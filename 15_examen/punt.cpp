#include <stdio.h>
#include <stdlib.h>

int main(){

    double *caja = NULL;

   caja = (double *) malloc(sizeof(double));
   *caja = 3.5;
   caja = (double *) realloc(caja, 2 * sizeof(double));
   *(caja+1) = 7.8;

   free(caja);
    return EXIT_SUCCESS;
}
