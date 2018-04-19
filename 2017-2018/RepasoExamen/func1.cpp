#include <stdlib.h>
#include <stdio.h>

void pregunta (int *x, int *y){
    printf("Dime un numero\n");
    scanf("%i\n",x);
    printf("Dime otro numero\n");
    scanf("%i\n",y);
}

int main (){

    int a, b;
    pregunta(&a,&b);

	return EXIT_SUCCESS;

}
