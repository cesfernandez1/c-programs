#include <stdlib.h>
#include <stdio.h>

int main (){

    FILE *archivo;

    int nContador = 0;
    char caracter = 'i';

    archivo = fopen("prueva.txt","r");
    do{
        if(fgetc(archivo )== caracter)
            nContador++;
        }while((caracter = fgetc(archivo)) != EOF);

        printf(" Numero de i = %d\n", nContador);
        fclose(archivo);
    

	return EXIT_SUCCESS;

}
