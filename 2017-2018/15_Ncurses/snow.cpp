#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>


#define N 2

struct Coordenada{
    double x;
    double y;
};

void pinta (struct Coordenada lista[N]){
    clear();
    for( int i=0; i<N; i++ )
        mvprintw( (int) lista[i].y % LINES, lista[i].x, "O" );
    refresh();
}

void actualiza(struct Coordenada lista[N]){
    for (int i=0; i<N; i++){
        lista[i].x += rand() % 3 - 1;
       lista[i].y += (rand() % 200) / 100. + .5;
    }
}

void inicializa(struct Coordenada lista[N]){
    for(int i=0; i<N;i++){
        lista[i].y = 1.;
        lista[i].x = rand() % COLS;
    }
}


int main (){

    struct Coordenada copo[N];

    srand(time(NULL));
    initscr();
    inicializa(copo);
    curs_set(0);


    while (1){
        actualiza(copo);
        pinta(copo);
        usleep(150000);
      
    }


    curs_set(1);
    endwin();

	return EXIT_SUCCESS;

}
