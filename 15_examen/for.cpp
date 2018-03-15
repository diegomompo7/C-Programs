#include <stdio.h>
#include <stdlib.h>
#define N 3


int main(){

    double a[N] = {2,6,3};
    double b[N] = {3,4,6};
    double suma =0;


    for(int f=0; f<N; f++)
        suma += a[f] * b[f];

    printf("El resultado = %.2lf\n",suma);


    return EXIT_SUCCESS;
}
