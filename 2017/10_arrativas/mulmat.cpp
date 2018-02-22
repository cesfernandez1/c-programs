
#include <stdlib.h>
#include <stdio.h>

#define N 2

int a [N][N]{

    {2, 4},
        {4, 7}
};

int b [N][N]{

    {3, 7},
        {2, 5}
};

int main(){
    int r[N][N];
    int f=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            f=0;
            for(int k=0; k<N; k++)
                f+=a[i][k]*b[k][j];
            r[i][j] =f;
            printf("%4i", r[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;

}
