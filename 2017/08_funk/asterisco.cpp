
#include <stdlib.h>
#include <stdio.h>


void pinta_cuadrado( int l ){
    for( int fc=0; fc<l; fc++  )
        for( int f=0; f<l; f++ ){
            for( int cc=0; cc<l; cc++ )
                for (int c=0; c<l; c++)
                    if((fc + cc) % 2)
                        printf("  ");
                    else
                        printf("X ");
            printf("\n");
        }
}
int main (){
    pinta_cuadrado(5);



    return EXIT_SUCCESS;

}
