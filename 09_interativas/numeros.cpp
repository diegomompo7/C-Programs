#include <stdio.h>
#include <stdlib.h>

int main(){

    for (int d=0; d<100000; d++ )
        for(int u=0; u<100000; u++)
        printf("%i%i\n", d , u);

    return EXIT_SUCCESS;
}
