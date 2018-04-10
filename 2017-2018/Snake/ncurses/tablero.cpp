#include <stdlib.h>
#include <stdio.h>

#define N 10

bool borde(int fil, int col){
    return col == 0 || col == N-1 || fil == 0 || fil == N-1; 
}


int main () {

    int col, fil;

    for( col=0; col<N; col++ ){
        for( fil=0; fil<N; fil++)
            if (borde(fil,col))
                printf("+");
            else
                printf(" ");
        printf("\n");
        }




    return EXIT_SUCCESS;
}
