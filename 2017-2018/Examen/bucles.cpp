#include <stdlib.h>
#include <stdio.h>

int main (){

    int opcion;

    do{

    printf("Dame un numero : ");
    scanf(" %i", &opcion);

    }while( opcion < 1 || opcion > 5 );
      
    


	return EXIT_SUCCESS;

}
