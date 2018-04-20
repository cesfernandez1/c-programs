#include <stdlib.h>
#include <stdio.h>

#define N 9


void introducir(int a[N][N]){
    char relleno = '\0';
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

int main (){

    int a[N][N];

    introducir(a);


    pintar_matriz(a);

	return EXIT_SUCCESS;

}
