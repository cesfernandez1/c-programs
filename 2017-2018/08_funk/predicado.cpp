
#include <stdlib.h>
#include <stdio.h>

int es_par(int op1){
    printf("Dame un numero: ");
    scanf(" %i", &op1);
    return op1;
}
int main (){


    if(es_par(2) % 2 == 0)
        printf("Es par. \n");
    else
        printf("Es impar. \n");

    return EXIT_SUCCESS;

}
