
#include <stdlib.h>
#include <stdio.h>



int main (){
    int l;

    printf("Lado?");
    scanf( " %i", &l );

    for (int f=0; f<l; f++){
        for ( int t=0; t<l; t++ )
            for (int c=t?1:0; c<l; c++)
                if ((f - c) == 0 )
                    printf("X");
                else 
                    printf(" ");
        printf("\n");
    }







    return EXIT_SUCCESS;

}
