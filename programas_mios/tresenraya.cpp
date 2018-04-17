#include <stdio.h>
#include <stdlib.h>
#include "cuerpotresenraya.h"

/* Parte 1: Crear tablero */
/* Parte 2: Introducir una ficha */

void loop (char c [3][3]);
void Intro_primero (char c [3][3]); /* Parte 1 */
void tablero (char c [3][3]); /* Parte 1 */
void Intro_Jugador1 (char c[3][3]); /* Parte 2 */
void Intro_Jugador2 (char c[3][3]); /* Parte 2 */
int ganador(char c[3][3]); /* Parte 3 */ 

int main(){

        char c [3][3]; 

	system("clear");

	loop (c);

    return EXIT_SUCCESS;
}

void loop (char c [3][3]){
    int i,j,pj1,pj2;

    i = 0;

    Intro_primero (c);

    do{
	system("clear");
	tablero (c);


        if(i % 2 == 0){
	   Intro_Jugador1(c);	
	}
	else{
	   Intro_Jugador2(c);
	}
        j = ganador(c);

	i++;

    }while (i < 9 && j == 2);

    system("clear");
    tablero (c);

    if (j == 0 ){
        printf("ENHORABUENA JUGADOR, ¡¡¡ HAS GANADO !!!\n\n");
    }
    else if (j == 0 ){
       printf("ENHORABUENA JUGADOR, ¡¡¡ HAS GANADO !!!\n\n"); 
    }
    else{
        printf("Habeís empatado");
    }
	
}
/* -------------------------------------------------------------------------- */
/* void Intro_primero (char c [3][3]){
	int i,j;
	char aux;
	
    ://github.com/diegomompo7/C-Programs.git
	aux = '1';

	for(i=0; i<3; i++){
 	   for(j=0; j<3; j++){
		c[i][j] = aux++;	
	   }
	   
	}

}
void tablero (char c [3][3]){  
	int i,j;
	for(i=0; i<3; i++){
	   for(j=0; j<3; j++){
		if(j < 2){
		  printf(" %c |", c[i][j]);
		}
		else{
		  printf(" %c ", c[i][j]);
		}

	   }
	   if(i < 2){
	      printf ("\n-----------\n");
	   }	
	}
	printf("\n\n");
}

* -------------------------------------------------------------------------- 

void Intro_Jugador1 (char c[3][3]){  
	int i,j,k;  i: vertical. j: horizontal 
	char aux;

	do{
	    do {
		printf("Coloca una ficha Jugador 1: ");
		fflush (stdin);
		scanf(" %c", &aux);
	    }while (aux < '1' || aux > '9');
	    
	    k = 0;

	    switch (aux){
		case '1': {
		   i = 0;
		   j= 0;
		   if (c[i][j] == 'X' || c [i][j] == 'O'){
			k = 1;
			printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
		   }
		   break;	
		}
		case '2': {
                   i = 0;
                   j= 1;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;       
                }
		case '3': {
                   i = 0;
                   j= 2;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;       
                }
		case '4': {
                   i = 1;
                   j= 0;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;       
                }
		case '5': {
                   i = 1;
                   j= 1;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;       
                }
		case '6': {
                   i = 1;
                   j= 2;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;       
                }
		case '7': {
                   i = 2;
                   j= 0;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;       
                }
		case '8': {
                   i = 2;
                   j= 1;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;       
                }
		case '9': {
                   i = 2;
                   j= 2;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;       
                }
	    }
	}while (k == 1);
	
	c[i][j] = 'X';
}
void Intro_Jugador2 (char c[3][3]){ * Parte 2 *
        int i,j,k; * i: vertical. j: horizontal *
        char aux;

        do{
            do {
                printf("Coloca una ficha Jugador 2: ");
                fflush (stdin);
                scanf(" %c", &aux);
            }while (aux < '1' || aux > '9');

            k = 0;

            switch (aux){
                case '1': {
                   i = 0;
                   j= 0;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;
                }
                case '2': {
                   i = 0;
                   j= 1;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;
                }
                case '3': {
                   i = 0;
                   j= 2;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;
                }
                case '4': {
                   i = 1;
                   j= 0;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;
                }
                case '5': {
                   i = 1;
                   j= 1;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;
                }
                case '6': {
                   i = 1; 52 /* -------------
                   j= 2;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;
                }
                case '7': {
                   i = 2;
                   j= 0;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;
                }
                case '8': {
                   i = 2;
                   j= 1;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;
                }
                case '9': {
                   i = 2;
                   j= 2;
                   if (c[i][j] == 'X' || c [i][j] == 'O'){
                        k = 1;
                        printf("La casilla está ocupada. Inténtalo de nuevo!!\n\n");
                   }
                   break;
                }
            }
        }while (k == 1);

        c[i][j] = 'O';
}
* -------------------------------------------------------------------------- */
