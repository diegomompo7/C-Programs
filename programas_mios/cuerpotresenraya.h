void Intro_primero (char c [3][3]){  /* Parte 1 */
	int i,j;
	char aux;
	
	aux = '1';

	for(i=0; i<3; i++){
 	   for(j=0; j<3; j++){
		c[i][j] = aux++;	
	   }
	   
	}

}
void tablero (char c [3][3]){ /* Parte 1 */
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

/* -------------------------------------------------------------------------- */

void Intro_Jugador1 (char c[3][3]){ /* Parte 2 */
	int i,j,k; /* i: vertical. j: horizontal */
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
void Intro_Jugador2 (char c[3][3]){ /* Parte 2 */
        int i,j,k; /* i: vertical. j: horizontal */
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

        c[i][j] = 'O';
}
/* -------------------------------------------------------------------------- */

int ganador(char c[3][3]){ /* Parte 3 */
  if(c[0][0] == 'X' || c[0][0] == 'O'){
      if(c[0][0] == c[0][1] && c[0][0] == c[0][2]){
        if(c[0][0] == 'X' || c[0][0] == 'O'){
            return 0; /* He ganado */
        }
      }
      if(c[0][0] == c[1][0] && c[0][0] == c[2][0]){
        if(c[0][0] == 'X' || c[0][0] == 'O'){
            return 0; /* He ganado */
        }
      }
  } 

   if(c[1][1] == 'X' || c[1][1] == 'O'){
      if(c[1][1] == c[0][0] && c[1][1] == c[2][2]){
        if(c[1][1] == 'X' || c[1][1] == 'O'){
            return 0; /* He ganado */
        }
      }
      if(c[1][1] == c[1][0] && c[1][1] == c[1][2]){
        if(c[1][1] == 'X' || c[1][1] == 'O'){
            return 0; /* He ganado */
        }
      }
      if(c[1][1] == c[0][2] && c[1][1] == c[2][0]){
        if(c[1][1] == 'X' || c[1][1] == 'O'){
            return 0; /* He ganado */
        }
      }
      if(c[1][1] == c[0][1] && c[1][1] == c[2][1]){
         if(c[1][1] == 'X' || c[1][1] == 'O'){
            return 0; /* He ganado */
          }
      }
   }
   
   if(c[2][2] == 'X' || c[2][2] == 'O'){
      if(c[2][2] == c[2][0] && c[2][2] == c[2][1]){
         if(c[2][2] == 'X' || c[2][2] == 'O'){
            return 0; /* He ganado */
         }
      }
      if(c[2][2] == c[0][2] && c[2][2] == c[1][2]){
         if(c[2][2] == 'X' || c[2][2] == 'O'){
            return 0; /* He ganado */
         }
      }
   }
  return 2; 
}
 
                  
                                   
                          
            
   




