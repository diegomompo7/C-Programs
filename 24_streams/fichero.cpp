#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *tubo;
    tubo = fopen("a.txt", "w");

    feof(tubo);
    fprintf(tubo, "Hola chache.\n");

    fclose(tubo);

    return EXIT_SUCCESS;
}
