#include <string.h> 
#include <stdlib.h>
#include <stdio.h>

#define N 0x100

int main (){
    char cadena[N];
    char *puntero = NULL;
    int longi;



    printf("Dime tu nombre :");
    printf("\a");
    scanf(" %[^\n]", cadena);
    
    longi = strlen(cadena);
    printf(" %i", longi);
    printf("  \n\a");

    puntero = (char*)malloc((longi + 1) * sizeof(char));
    strncpy( puntero , cadena , longi + 1);

  

    

        free(puntero);
	return EXIT_SUCCESS;

}
