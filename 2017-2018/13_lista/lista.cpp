
#include <stdlib.h>
#include <stdio.h>

int main (){

    char **lista = NULL;
    char buffer[N];
    int len;
    char *algun_sitio = NULL
    bool a = true;

    while(a){
        printf("Dime tu nombre: ");
        fgets(buffer , N , stdin);
        len = strlen(buffer);
        algun_sitio = (char *) malloc( len * sizeof(char));
        strncpy(algun_sitio, buffer, len - 1);
        algun_sitio[len-1] = '\0';
        a = false;
    }

    free(algun_sitio);

    return EXIT_SUCCESS;

}
