#include <stdio.h>
#include <stdlib.h>

#define N 3

void ver(double a[N][N]){
    printf("\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            printf("%6.2lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
}

void intercambia(double a[N][N], int f1, int f2) {
    double copia;
    for (int c=0; c<N; c++){
        copia = a[f1][c];
        a[f1][c] = a[f2][c];
        a[f2][c] = copia;
    }
}

int diagonaliza(double a[N][N], double coef[N]){
    double k;
    int cima = 0;

    // Normalizo la fila n
    // Apunto el coeficiente n
    // Busco los 0's en las filas inferiores
    //    Resto a la fila i la fila n multiplicada por ain

    ver(a);

    for (int n=0; n<N; n++){
        for (int f=n; f<N; f++){
            coef[cima] = k = a[n][n];
            if (k)
                break;
            if (f == N-1)
                return 0;
            intercambia(a, n, f+1);
            coef[cima] *= -1;
        }
        cima++;
        for (int col=0; col<N; col++)
            a[n][col] /= k;
        for (int f=n+1; f<N; f++){
            k = a[f][n];
            for (int col=0; col<N; col++)
                a[f][col] -= (a[n][col] * k);
        }
        ver(a);
    }
    return 1;
}

int main(){
    double a[N][N] = {
        {3, 1, 2},
        {4, 7, 1},
        {6, 2, 4}
    },
           coef[N], det=1;
    if (!diagonaliza(a, coef)){
        fprintf(stderr, "Rango menor que 3.\n");
        det = 0;
    }

    for (int i=0; i<N; i++)
        det *= coef[i];

    printf("Determinante: %lf\n", det);


    return EXIT_SUCCESS;
}
