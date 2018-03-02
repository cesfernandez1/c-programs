 
#include <stdlib.h>
#include <stdio.h>

#define N 20

int main (){
    int a[N];
    a[0] = 1;
    a[1] = 1;
    a[3] = (N-1) + (N-2);
    for (int cel=0; cel<N; cel++);

    printf("%i\n ", a[3]);

	return EXIT_SUCCESS;

}
