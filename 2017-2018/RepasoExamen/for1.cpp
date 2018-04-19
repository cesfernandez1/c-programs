#include <stdlib.h>
#include <stdio.h>


#define N 3

int main (){

    double a[N]= {1 , 1 , 1};
    double b[N]= {1 , 1 , 1};

    double suma = 0;


    for(int i=0; i<N; i++){
        suma += a[i] * b[i];

    }

    printf("La suma es %.2lf\n",suma);

	return EXIT_SUCCESS;

}
