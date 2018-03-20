#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int base1;
    int exp1;
    int base2;
    int exp2;
    int resultado1;
    int resultado2;
    int resultado3;
    int resultado4;
    int resultado5;
    int resultado6;
    int resultado7;
    int resultado8;
    int resultado9;
    int resultado10;
    int resultado11;
    int resultado12;
    int resultado13;

    printf("Ingrese la base número 1:\n");
    scanf("%i", &base1);
    printf("Ingrese la base exponente número 1:\n");
    scanf("%i", &exp1);
    printf("Ingrese la base número 2:\n");
    scanf("%i", &base2);
    printf("Ingrese el exponente número 2:\n");
    scanf("%i", &exp2);

    resultado1 = pow(base1, exp1);
    resultado2 = pow(base2, exp2);
    resultado3 = (resultado1 + resultado2);
    resultado4 = (resultado1 - resultado2);
    resultado5 = (resultado1 * resultado2);
    resultado6 = (resultado1 / resultado2);
    resultado7 = sqrt(resultado3);
    resultado8 = sqrt(resultado4);
    resultado9 = sqrt(resultado5);
    resultado10 = sqrt(resultado6);
    resultado11 = (resultado1 + resultado2 + resultado3 + resultado4 + resultado5 + resultado6 + resultado7 + resultado8 + resultado9 + resultado10);
    resultado12 = 2;
    resultado13 = (resultado11 / resultado12);

    printf("%i elevado a %i es igual a %i\n", base1, exp1, resultado1);
    printf("%i elevado a %i es igual a %i\n", base2, exp2, resultado2);
    printf("%i +  %i es igual a %i\n", resultado1, resultado2, resultado3);
    printf("%i - %i es igual a %i\n", resultado1, resultado2, resultado4);
    printf("%i * %i es igual a %i\n", resultado1, resultado2, resultado5);
    printf("%i / %i es igual a %i\n", resultado1, resultado2, resultado6);
    printf("La raíz cuadrada de %i es %i\n", resultado3, resultado7);
    printf("La raíz cuadrada de %i es %i\n", resultado4, resultado8);
    printf("La raíz cuadrada de %i es %i\n", resultado5, resultado9);
    printf("La raíz cuadrada de %i es %i\n", resultado6, resultado10);
    printf("La suma entre %i,%i,%i,%i,%i,%i,%i,%i,%i y %i es %i\n", resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7, resultado8, resultado9, resultado10, resultado11);
    printf("La división entre %i y %i es %i\n", resultado11, resultado12, resultado13);






    return EXIT_SUCCESS;
}
