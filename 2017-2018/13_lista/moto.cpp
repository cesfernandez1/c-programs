#include <stdlib.h>
#include <stdio.h>

int main (){

    char frase[] = "Mi moto alpina derrapante\n";
    char *letra = frase;

    while( *letra != '\0' ){
        printf(" %c", *letra);
        letra++;
    }

	return EXIT_SUCCESS;

}
