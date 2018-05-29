#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    FILE *pf = fopen("b.int", "wb");
    fwrite(&num, sizeof(int), 1 , pf);
    fclose(pf);

    printf("He leído:  %i\n", num);

    return EXIT_SUCCESS;
}
