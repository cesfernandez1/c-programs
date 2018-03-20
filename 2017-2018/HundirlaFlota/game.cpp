#include <stdlib.h>
#include <stdio.h>


//
#define Q 10


// Numero de casillas del tablero
#define N 10
#define M 10

// Numero de casillas que ocupa cada barco
#define P 4 // Portaviones
#define F 3 // Fragata
#define L 2 // Lancha

void pinta_fnumero( int c[Q]){
    int b = 1;
    for(int fn=0; fn<Q; fn++){
         printf("    %i ", b);
        b++;
    }
}

void pinta_cnumero( int c[Q] ){
    int b = 1;
    for(int fn=0; fn<Q; fn++){
        printf(" %i", b);
        printf(" \n");
        b++;
    }
}

void pinta_tablero(int a[N][N]){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            printf("   頣 ");
        printf(" \n\n");
    }
}


int main (){
    int b = 1;
    int c[Q];
    char nombre;

    system("clear");

    printf(" Nombre de Usuario:");
    scanf(" %s", &nombre);

    system("clear");
    printf(" Esta jugando %s\n\n", &nombre);

    int a[N][N];

    system ("toilet -fpagga Hundir La Flota");

    printf("\n");

    pinta_fnumero(c);

    printf(" \n");

    pinta_cnumero(c);


    pinta_tablero(a);
//Esta es la leyenda del juego
    printf(
            "Leyenda : \n"
            "\t1.A = Agua\n"
            "\t2.頣 = Coordenada no introducida\n"
            "\t3.T = Tocado\n"
            "\t4.H = Hundido\n"
          );
// Numero y espacio que ocupan los barcos 
    printf(
            "Barcos : \n"
            "\t1. Portaaviones 2x 頣頣頣頣\n"
            "\t2. Fragata      1x 頣頣頣\n"
            "\t3. Lancha       2x 頣頣\n"

            );





    return EXIT_SUCCESS;

}
