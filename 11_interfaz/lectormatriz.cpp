#include <stdio.h>
#include <stdlib.h>

int main(){

    int filas=0, columnas = 0;
    int columna = 0;
    int miradita;
    bool fin = false;
    double nuevo_num;
    double *matriz = NULL;

    printf("Tu Matriz:\n\n");

    do {
        scanf(" %lf", &nuevo_num);
        if (filas == 0)
            columnas++;
        columna++;
        if (columna <= columnas){
            matriz = (double *) realloc(matriz,
                      (filas * columnas + columna) * sizeof(double));
              *(matriz+filas*columnas+columna-1) = nuevo_num;
        }

        miradita = getc(stdin);
        if (miradita == '\n'){
            miradita = getc(stdin);
            filas ++;
            if (miradita == '\n')
                fin = true;
            else{
                columna = 0;
                for (int c=columna+1; c<columnas; c++){
                        matriz = (double *) realloc(matriz,
                                (filas * columnas + c) * sizeof(double));
                        *(matriz+filas*columnas+c-1) = 0;
                }
            }
        }
        ungetc(miradita, stdin);

    } while(!fin);

    for (int f = 0; f<filas; f++){
        for (int c= 0; c<columnas; c++)
            printf("%7.2lf", *(matriz+c+f*columnas));
        printf("\n");
    }
    return EXIT_SUCCESS;
}
