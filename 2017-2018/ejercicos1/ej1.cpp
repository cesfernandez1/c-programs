
#include <stdlib.h>
#include <stdio.h>

double  suma (double op1, double op2) 
{return op1 + op2; } 
int main (){
    double op1, op2;


    printf("Operando 1 :"  );
    scanf("%lf", &op1);
    printf("Operando 2 :"  );
    scanf("%lf", &op2);
    printf("%.2lf + %.2lf = %.2lf\n", op1, op2, suma(op1, op2));

    return EXIT_SUCCESS;

}
