
 
#include <stdlib.h>
#include <stdio.h>

int main (){

    char nombre[16];
    char hexadecimal[16];
    int num, dia, mes;

    printf("Entero: ");
    scanf(" %i", &num);
    scanf(" %s", nombre);
    printf("[%i] => %s.\n", num, nombre);

    printf(" Hexadecimal: ");
    scanf(" %[0-9a-fA-F]", hexadecimal);
    scanf(" %[^a-f]", hexadecimal);
    printf("0x%sh\n", hexadecimal);

    scanf(" %[^\n] ", nombre);
    fgets(nombre, 16, stdin);
    
    scanf(" %i/%i/%*i", &dia, &mes, &año)


	return EXIT_SUCCESS;

}
