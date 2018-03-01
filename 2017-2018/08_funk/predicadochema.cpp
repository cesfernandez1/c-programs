 
#include <stdlib.h>
#include <stdio.h>
int es_par(int prueba) {
    return !(prueba % 2);
}

int es_pa(int prueba) {
    return prueba % 2 ? 0 : 1;
}

int main (){

	return EXIT_SUCCESS;

}
