#include <stdlib.h>
#include <stdio.h>

int main (){

    int rojo;
    int azul;
    int amarillo;

    system("toilet --gay -fpagga COLORES¡¡¡"  );


    printf(" Dame el valor del color rojo:");
    scanf(" %i", &rojo);

    printf(" Dame el valor del color azul:");
    scanf(" %i", &azul);

    printf(" Dame el valor del color amarillo:");
    scanf(" %i", &amarillo);

    if ( rojo == 1 & azul  == 1 & amarillo == 1  ) { 
        printf( " El color resultante es el Blanco.\n"  );

    }

    else if ( rojo ==0 & azul == 0 & amarillo == 0  )  {

        printf( " El color resultante es el Negro.\n"   );

    }

    else if ( rojo == 1 & azul == 0 & amarillo == 0  ) {

        printf( " El color resultante es el Rojo .\n"  );
    }

    else if ( rojo == 0 & azul == 1 & amarillo == 0  ) {

        printf( " El color resultante es el Azul.\n"  );
    }

    else if ( rojo == 0 & azul == 0 & amarillo == 1 ) {

        printf( " El color resultante es el Amarillo.\n" );
    }

    else if ( rojo == 1 & azul == 1 & amarillo == 0 ) {

        printf(" El color resultante es el Morado.\n");

    }

    else if ( rojo == 1 & azul == 0 & amarillo == 1 ) {

        printf(" El color resultante es el Naranja.\n");
    }

    else if ( rojo == 0 & azul == 1 & amarillo == 1 ) {

        printf( " El color resultante es el Verde.\n" );
    }












    return EXIT_SUCCESS;



}
