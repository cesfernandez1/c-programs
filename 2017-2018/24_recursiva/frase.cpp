#include <stdlib.h>
#include <stdio.h>


void imprime(char *letra) {
    printf("%c", *letra);
    if( *letra != '\0')
        imprime(letra+1);
}


int main (){

    char frase[] = "Hi, my name is Ralph";
    char *letra = frase;


    imprime(letra);
    printf("\n");

	return EXIT_SUCCESS;

}
