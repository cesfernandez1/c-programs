 
#include <stdlib.h>
#include <stdio.h>

#define ROJO "\x1B[31m"
#define NORM "\x1B[39m"
int main (){
    int entero = 34;
    float realillo = 35.7;
    double real = 35.7;
    unsigned char byte = 97;

    long int entero_largo = 93;
    unsigned positivo = 5; 

        system("toilet --gay -fpagga DATOS");

        printf("%i  \t(%lu bytes)\n", entero, sizeof(int));
        printf("%li  \t(%lu bytes)\n", entero_largo, sizeof(int));
        printf("%u \t(%lu bytes)\n", positivo, sizeof(int));

        printf("%i \t(%lu bytes)\n", byte, sizeof(char));

        printf("%F \t(%lu bytes)\n", realillo, sizeof(float));
        printf("%8.2lf \t(%lu bytes)\n", real, sizeof(double));

        printf("%c%c%c", 49,  50, 10);
        printf( ROJO "12" NORM);    

	return EXIT_SUCCESS;
}
