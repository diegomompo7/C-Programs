#include <stdio.h>
#include <stdlib.h>

int main(){

    int r= 1,
        y = 0,
        b = 1;
    
    if (r)
        if (y)
            if (b)
                printf("blanco");
            else
                printf("naranja");
        else
            printf("Morado");
    
    
    else
        if (y)
            if (b)
                printf("Verde");
            else
              printf("Amarillo");
        else
            if (b)           
                printf("Azul");
            else
                printf("Negro");
    
      ;
    return EXIT_SUCCESS;
}
