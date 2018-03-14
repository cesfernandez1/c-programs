#include <stdlib.h>
#include <stdio.h>


void llamada( int *x, int *y ){

    printf("Dame un dato: ");
    scanf(" %i", x);
    printf("Dame otro dato: ");
    scanf(" %i", y);


}
int main (){

    int primerdato,
        segundodato;
    llamada(&primerdato , &segundodato);

    return EXIT_SUCCESS;

}
