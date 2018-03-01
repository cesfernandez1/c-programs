 
#include <stdlib.h>
#include <stdio.h>



int main (){

    int opcion;

    printf(
            "Opciones:\n"
            "\n"
            "\t1. Lunes\n"
            "\t2. Martes\n"
            "\t3. Miercoles\n"
            "\t4. Jueves\n"
            "\t5. Viernes\n"
            "\t6. Sábado\n"
            "\t7. Domingo\n"
            "\n"
            "\tOpcion: "
            );

    scanf("%i", &opcion);

    if (opcion == 1 )
    printf("Lunes\n" );

    else if ( opcion == 2 )
        printf ( "Martes\n" );
    switch (opcion){
    default:
    printf( " Del 1 al 7 poh favohh.\n" );
    }

	return EXIT_SUCCESS;

}
