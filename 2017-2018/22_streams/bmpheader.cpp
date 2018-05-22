#include <stdlib.h>
#include <stdio.h>

#pragma pack(1)

typedef struct {
    char signature[2];
    unsigned size;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned data_offset;
}BMPHeader;

void show (BMPHeader header) {
    printf("Signature:        %c%c\n", header.signature[0], header.signature[1] );
    printf("Tamaño:           %i\n", header.size);
    printf("Datos de la imagen: %i (%Xh)\n", header.data_offset, header.data_offset);
}

int main (){

    const char *fn = "a.bmp";
    FILE *pbmp = NULL;
    BMPHeader header;

    if(!(pbmp = fopen(fn, "r"))) {
        fprintf(stderr, "No he encontrado el fichero\n");
        return EXIT_FAILURE;
    }
    fread(&header, sizeof(BMPHeader), 1, pbmp);
    fclose(pbmp);

    show(header);

	return EXIT_SUCCESS;

}
