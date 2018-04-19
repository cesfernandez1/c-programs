#include <stdlib.h>
#include <stdio.h>

int main (){

    int opcion;

    do{
        printf("Dime un numero");
        scanf(" %i", &opcion);

    }while( opcion>5 || 1>opcion );

	return EXIT_SUCCESS;

}
