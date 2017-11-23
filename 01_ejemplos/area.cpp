#include <stdio.h>
#include <stdlib.h>

int main(){
    double lado,
        area,
        perimetro;

    system("toilet --gay -fpagga CUADRADO");

    /* ENTRADA DATOS */
    printf("Lado:");
    scanf(" %f", &lado);

    /* CALCULOS */
    area = lado * lado;
    perimetro = 4 * lado;

    /* SALIDA DE DATOS */

    printf( "Area: %f\n"
            "Perimetro: %f\n",
            area, perimetro );
    return EXIT_SUCCESS;
}
