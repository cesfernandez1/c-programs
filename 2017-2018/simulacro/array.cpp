#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define N 0x100

int main (){

    char **punt;
    char cadena[N];
    int longitud;


    printf(" Dime tu nombre :");
    scanf(" %[^\n]", cadena);
    longitud = strlen(cadena);

    l = (char **) malloc(sizeof(char *));

    *l = (char *) malloc (longitud + 1);
    strncpy(*l, cadena, N);

    printf("Nombre : ");
    scanf(" %[^\n]", cadena);
    longitud = strlen(cadena);



    puntero = (char*) malloc((longitud + 1) * sizeof(char));

    strncpy(puntero , cadena , longitud + 1);

    free(puntero);




    return EXIT_SUCCESS;

}
