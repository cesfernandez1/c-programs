 
#include <stdlib.h>
#include <stdio.h>

int main (){

    double vertice[3] = { 8., -6., 4. };

    printf("( %.2lf , %.2lf , %.2lf ) => \t" , vertice[0], vertice[1], vertice[2]);
    printf("( %.2lf , %.2lf  ) \n" , 
            vertice[0] / vertice[2],
            -vertice[1] / vertice[2] );

	return EXIT_SUCCESS;

}