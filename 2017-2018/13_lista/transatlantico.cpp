 
#include <stdlib.h>
#include <stdio.h>

int main (){
    char palindromo[] = "dabale arroz a la zorra el abad\n";
    char *letra = palindromo;

    while( *letra != '\0' ){
        printf(" %c", *letra);
        letra++;
    }

	return EXIT_SUCCESS;

}
