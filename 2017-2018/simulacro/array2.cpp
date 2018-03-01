#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define N 0x100

int main (){

    char *puntero = NULL;
    char cadena[N];
    int longitud;


    printf(" Dime tu nombre :");
    scanf(" %[^\n]", cadena);
    longitud = strlen(cadena);
    printf("\n");
    printf(" %i\n", longitud);


    puntero = (char*) malloc((longitud + 1) * sizeof(char));

    strncpy(puntero , cadena , longitud + 1);

    free(puntero);




    return EXIT_SUCCESS;

}
