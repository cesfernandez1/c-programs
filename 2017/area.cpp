 
#include <stdlib.h>
#include <stdio.h>

int main(){
    int lado,
        area,
        perimetro;

    system("toilet --gay -fpagga CUADRADO");

    /* Entrada de DAtos*/

    printf("Lado: ");
    scanf(" %i", &lado);
     /*Calculos*/

    area = lado * lado;
    perimetro = 4 * lado;

     
    printf( "Area: %i\n"
            "Perimetro: %i\n",
            area,perimetro );
       

	return EXIT_SUCCESS;

}
