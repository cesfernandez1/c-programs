#include<stdio.h>
#include<stdlib.h>


#define N 0x100

int main () {

    const  char *p = "The world is ";  //Coinstante tipo cadena.
    /* Pequeña leccion sobre punteros   
    char const *p // Puntero a una constante . Forma coherente de decir que el char es constante .
    char * const p; // Puntero  constante (fijo)
    char const * const p; // Puntero fijo a una constante .
    */

    // Puntero : Es una variable que contiene una direccion de memoria 


    char frase[N] = "a vampire.\n"; //Inicialización
    char *d = frase;

    d = &fras[2];
    
    frase[2] == 'v';  // Notacion de matrices
    *d == 'v';        //Notacion de punteros 
    *(d+2) == 'm';  // El 2 esta en aritmetica de punteros 

    printf(" d ocupa %lu bytes.\n", sizeof(d));

    return EXIT_SUCCESS;


}
