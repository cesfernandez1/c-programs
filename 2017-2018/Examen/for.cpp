#include <stdlib.h>
#include <stdio.h>

#define N 3
int main (){

    double a[N] = {2, 4, 8};
    double b[N] = {3, 7, 9};
    double suma = 0;
    double mul;

    for( int f=0; f<N; f++){
        mul = a[f] * b[f];
        suma += mul;
    }

    printf(" La suma es: %.2lf", suma);




	return EXIT_SUCCESS;

}
