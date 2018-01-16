#include <stdio.h>
#include <stdlib.h>

double suma (double op1, double op2) {return op1 + op2; }

int main(){
    //pides
    double op1, op2;
    suma(&op1,&op2);
    printf("dime el primer numero");
    scanf("%x", &op1);
    printf("dime el segundo numero");
    scanf("%x", &op2);
    //calculas
    printf("%.2lf + %.2lf = %.2lf", op1,op2, suma(op1, op2));    
   //imprimes
    return EXIT_SUCCESS;
}
