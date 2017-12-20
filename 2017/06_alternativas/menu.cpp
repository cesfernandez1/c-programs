
#include <stdlib.h>
#include <stdio.h>

int main (){


    unsigned opcion;
    system ("toilet --gay -fpagga AREAS");

    printf(
            "Elige la figura:\n"
            "\n"
            "\t1. Triángulo.\n"
            "\t2. Cuadrado.\n"
            "\t3. Paralelogramo.\n"
            "\t4. Pentágono.\n"
            "\t5. Círculo.\n"
            "\n"
            "\tOpción: "
          );

    scanf(" %i", &opcion);

    switch(opcion) {

        case 1:
            printf("△");
            break;
        case 2:
            printf("□");
            break;
        case 3:
            printf("▱");
        case 4:
            printf("⬟");
            break;
        case 5:
            printf("○");
            break;

        default:
            printf(" Del 1 al 5 , torrijas.\n");
            break;


    }
    printf("\n");

    return EXIT_SUCCESS;

}
