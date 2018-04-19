#include <stdlib.h>
#include <stdio.h>

int main (){

    double *x;

    x =(double *) malloc (sizeof(double));
    *x = 3.5;
    x = (double *) realloc(x, 2 *sizeof(double));
    *(x + 1) = 7.8;

    free(x);


    return EXIT_SUCCESS;

}
