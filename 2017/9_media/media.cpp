#include<stdlib.h>
#include<stdio.h>

int main() {

    int op1;
    int op2;
    int op3;
    int op4;
    int op5;
    int op6;
    int op7;
    int op8;

    system("toilet --gay -fpagga CALCULA TU NOTA MEDIA");


    printf("Nota de Progamación: ");
    scanf(" %i", &op1);
    printf("Nota de Bases de Datos: ");
    scanf(" %i", &op2);
    printf("Nota de Entornos de Desarrollo: ");
    scanf(" %i", &op3);
    printf("Nota de Lenguaje de Marcas: ");
    scanf(" %i", &op4);
    printf("Nota de Sistemas Informáticos: ");
    scanf(" %i", &op5);
    printf("Nota de FOL: ");
    scanf(" %i", &op6);
    printf("Nota de Inglés: ");
    scanf(" %i", &op7);
    printf("Nota de Empresa: ");
    scanf(" %i", &op8);


    printf(" (%i + %i + %i + %i + %i + %i + %i + %i) / 8 = %i\n  ", op1, op2, op3,  op4, op5, op6, op7, op8, (op1 + op2 + op3 + op4 + op5 + op6 + op7 + op8 ) / 8 );

    if ((op1 + op2 + op3 + op4 + op5 + op6 + op7 + op8 ) / 8 <5 ) 
        printf("Marica ponte a estudiar\n");
        
    if (( op1 + op2 + op3 + op4 + op5 + op6 + op7 + op8  ) / 8 > 8)
       printf("Bro vas con el rabo fuera\n");

    if( (op1 + op2 + op3 + op4 + op5 + op6 + op7 + op8 ) / 8 > 6 )
        printf("Vas bien, pero no te relajes\n");
    
  











    return EXIT_SUCCESS;
}
