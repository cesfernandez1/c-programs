#include <stdlib.h>
#include <stdio.h>

//Nedd to fix some problems



bool es_primo(int dividendo, int divisor ){
    if(divisor <= 1)
        return false;

    return (dividendo % divisor == 0) || es_primo(dividendo, divisor - 1);

}

int main (){

    int dividendo,
        divisor;
    bool primo = es_primo;

    printf("Que numero quieres saber si es primo ?");
    scanf("%i", &dividendo);

     if(primo ==   true){
            printf("El numero que has introducido es primo");
     }else 
         printf("No es primo");
    

	return EXIT_SUCCESS;

}
