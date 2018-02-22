
#include <stdlib.h>
#include <stdio.h>

int main (){

    int a, b, c, d, e, f, g, h, i;


    printf("Estructura de una matriz\n");
    printf("a  b  c\nd  e  f\ng  h  i\n\n\n");

    printf("Valor de a: ");
    scanf("%i", &a);

    printf("Valor de b: ");
    scanf("%i", &b);


    printf("Valor de c: ");
    scanf("%i", &c);

    printf("Valor de d: ");
    scanf("%i", &d);

    printf("Valor de e: ");
    scanf("%i", &e);

    printf("Valor de f: ");
    scanf("%i", &f);

    printf("Valor de g: ");
    scanf("%i", &g);

    printf("Valor de h: ");
    scanf("%i", &h);

    printf("Valor de i: ");
    scanf("%i", &i);

    printf("\n\n");

    printf("%i  %i  %i\n%i  %i  %i\n%i  %i  %i\n\n\n", a, b, c, d, e, f, g, h, i );


    printf("El resultado es el siguiente:\n");

    printf("%i\n", (a*e*i+b*f*g+d*h*c-((c*f*g)+(b*d*i)+(f*h*a))));

  








    return EXIT_SUCCESS;

}
