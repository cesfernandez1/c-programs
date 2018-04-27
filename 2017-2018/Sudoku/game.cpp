#include <stdlib.h>
#include <stdio.h>

#define N 9


void introducir(int a[N][N]){
    int relleno = '\0';
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            a[f][c]= relleno;
    }
}

void pintar_matriz(int a[N][N]){
    int num = 0;
    int mun = 0;
    int f , c;
    for(int i=0; i<N; i++)
        printf("\t %i", num++);
    printf("\n");
    printf("\n\t_______________________________________________________________________");
    printf("\n");
    for(int f=0; f<N; f++){
        printf("%i\n", mun++);
        for(int c=0; c<N; c++)
            if(c<9)
                printf("\t  %1.i   |",a[f][c]);
        if(f<8)
            printf("\n\t_______________________________________________________________________");
        printf("\n");
    }
}

void defaultnumbers(int a [N][N]){
    a[0][1] = 6;
    a[0][3] = 1;
    a[0][5] = 4;
    a[0][7] = 5;
    a[1][2] = 8;
    a[1][3] = 3;
    a[1][5] = 5;
    a[1][6] = 6;
    a[2][0] = 2;
    a[2][8] = 1;
    a[3][0] = 8;
    a[3][3] = 4;
    a[3][5] = 7;
    a[3][8] = 6;
    a[4][2] = 6;
    a[4][6] = 3;
    a[5][0] = 7;
    a[5][3] = 9;
    a[5][5] = 1;
    a[5][8] = 4;
    a[6][0] = 5;
    a[6][8] = 2;
    a[7][2] = 7;
    a[7][3] = 2;
    a[7][5] = 6;
    a[7][6] = 9;
    a[8][1] = 4;
    a[8][3] = 5;
    a[8][5] = 8;
    a[8][7] = 7;
}
void meter_datos (int a[N][N]) {

    int f , c , numero_cogido,numero;

    printf(" Que numero quieres meter?");
    scanf(" %i", &numero_cogido);
    printf(" Introduce la fila ");
    scanf(" %i", &f);
    printf(" Introduce la columna");
    scanf(" %i", &c);
    numero = numero_cogido;
    a[f][c] = numero;
}

int main (){

    int a[N][N];
    int f, c, numero;

    system("clear");

    printf("SUDOKU\n\n");
    introducir(a);
    defaultnumbers(a);
    pintar_matriz(a);
    do{

        meter_datos(a);
 pintar_matriz(a);

    }while(1);

    printf("\n\n");

    return EXIT_SUCCESS;

}
