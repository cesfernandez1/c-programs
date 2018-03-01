 
#include <stdlib.h>
#include <stdio.h>

int main (){
    int numero;

    printf("Número: ");
    scanf(" %i", &numero);

    if (numero % 2 == 0) {
        printf(" El número %i es par.\n", numero);

    } else 
        printf("Imparrr \n");

    printf("Y colorín colorado este programita se ha terminado \n");
    


	return EXIT_SUCCESS;

}
