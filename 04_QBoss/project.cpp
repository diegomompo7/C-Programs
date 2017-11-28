#include <stdio.h>
#include <stdlib.h>

#define X 0
#define Y 1
#define Z 2
#define D 3

int main(){



    double verticle[D];

    printf("(x, y, z): ");
    scanf(" ( %lf , %lf , %lf  ) ",
           &verticle[X], &verticle[Y], &verticle[Z]);
      


    printf("(%.2lf, %.2lf, %.2lf)  /t"
    verticle[X], verticle [Y],  verticle[Z];
    printf(" (%.2lf, %.2lf) /n"
    verticle[X] / verticle[Z],
    -verticle[Y] / verticle[Z];
    return EXIT_SUCCESS;
}
