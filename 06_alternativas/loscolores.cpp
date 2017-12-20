#include <stdio.h>
#include <stdlib.h>

int main(){

	int rojo,amarillo,azul;

printf(" Dime el color rojo: ");
scanf("%i" , &rojo);

printf(" Dime el color amarillo: ");
scanf("%i" , &amarillo);

printf(" Dime el color azul: ");
scanf("%i" , &azul);

if(rojo==0)
   if(azul==1)
   printf("El color es el morado./n");
   if(amarillo==2)
   printf("El color es el naranja./n");
  else
   printf("El color es el rojo");

}
