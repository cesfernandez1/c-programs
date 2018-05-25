#include <stdlib.h>
#include <stdio.h>
#include "bmp.h"

const char *source = "lobo.bmp";
const char *destin = "b.bmp";


int main (){
    FILE *pbmp = NULL;
    Header header;
    Color imagen[1488 * 810];
    int pixeles = 1488 * 810;

    if(!(pbmp = fopen(source, "r"))) {
        fprintf(stderr, " No hay imagen lobo.bmp de partida\n");
        return EXIT_FAILURE;
    }

    fread(&header, sizeof(Header), 1, pbmp);
    fseek(pbmp, header.bmp.data_offset, SEEK_SET);
    fread(imagen,sizeof(Color), pixeles, pbmp);
    fclose(pbmp);

     for(int i=0; i<pixeles; i++) {
         char media = imagen[i].r + imagen[i].g + imagen[i].b / 3;
         //imagen[i].r = imagen[i].g = imagen[i].b = media;
         

         if(imagen[i].r > media){
            imagen[i].r = 255;
            imagen[i].g = 255;
            imagen[i].b = 255;
         }else {
             imagen[i].r = 255;
             imagen[i].g = 0;
             imagen[i].b = 0;
         }
         if(imagen[i].g > media){
             imagen[i].r = 255;
             imagen[i].g = 255;
             imagen[i].b = 255;
         }else {
             imagen[i].r = 0;
             imagen[i].g = 0;
             imagen[i].b = 0;
         }
         if(imagen[i].b > media){
             imagen[i].r = 255;
             imagen[i].g = 255;
             imagen[i].b = 255;

         }else{
             imagen[i].r = 0;
             imagen[i].g = 0;
             imagen[i].b = 0;
         }

     }

     if(!(pbmp = fopen(destin, "r+"))) {
         fprintf(stderr, "No hay imagen de destino");
         return EXIT_FAILURE;
     }

     fseek(pbmp, header.bmp.data_offset, SEEK_SET);
     fwrite(imagen, sizeof(Color), pixeles, pbmp);
     fclose(pbmp);

	return EXIT_SUCCESS;

}
