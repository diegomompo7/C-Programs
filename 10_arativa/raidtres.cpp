#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){

    int numero, numero1, numero2, numero3, numero4, numero5, numerofin, numerofin1, numerofinal;
    int n[A];
    int a[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int desplaz=0; desplaz<N; desplaz++) {
        for (int elem=0; elem<N; elem++)
            n[0] = a[elem%N][(desplaz+elem)%N];
        
        numero= n[0] * n[1] * n[2];
        numero1= n[3] * n[4] * n[5];
        numero2= n[6] * n[7] * n[8];

        for (int elem=0; elem<N; elem++)
            n[0] = a[elem%N][(desplaz+elem)%N];

        numero3= n[9] * n[10] * n[11];
        numero4= n[12] * n[13] * n[14];
        numero5= n[15] * n[16] * n[17];

    }
  
    printf("\n");

    numerofin = numero + numero1 + numero2;
    numerofin1 = numero3 + numero4 + numero5;
    numerofinal = numerofin - numerofin1;

    printf("%i", numerofinal);

    printf("\n");
    return EXIT_SUCCESS;
}
