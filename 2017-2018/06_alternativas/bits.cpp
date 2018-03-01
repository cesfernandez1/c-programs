
#include <stdlib.h>
#include <stdio.h>

int main (){

    int bit1;
    int bit2;


    printf(" Dame el valor del primer bit:");
    scanf(" %i", &bit1);

    printf(" Dame el valor del segundo bit:");
    scanf(" %i", &bit2);

    if ( bit1 == 1 & bit2  == 1 ) { 
        printf( " El número que has introducido es el 3.\n" );

    }

    else if ( bit1 ==0 & bit2 == 0 )  {

        printf( " El numero que has introducido es el 0.\n"  );

    }

    else if ( bit1 == 0 & bit2 == 1 ) {

        printf( " El numero que has introducido es el 2.\n" );
    }
    else if ( bit1 == 1 & bit2 == 0 ) {

        printf( " El numero que has introducido es el 1.\n" );
    }









    return EXIT_SUCCESS;

}
