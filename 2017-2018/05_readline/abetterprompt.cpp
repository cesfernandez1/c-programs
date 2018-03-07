#include<readline/readline.h>
#include <stdlib.h>
#include <stdio.h>

#define N 0x100

int main (){

    char buffer[N];

    printf("Dime tu nombre: ");
    fgets(buffer, N, stdin);

    readline("Nombre: ");

	return EXIT_SUCCESS;

}
