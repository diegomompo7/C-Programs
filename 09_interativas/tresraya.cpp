#include <stdio.h>
#include <stdlib.h>

#define n 3
int main(){

    for(int i=0; i<n; i++){
        for(int c=0; c<n; c++)
            if(c==i)
                printf("*");
            else
               printf("\n");
        printf("\n");
    }

    return EXIT_SUCCESS;
}
