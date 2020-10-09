#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{   //Getfloat
    //float retorno;
    //utn_getNumeroFlotante(&retorno, "ingrese:float : ", "error", 1, 99.9,3);
    //printf("\nEl float es %.2f", retorno);
    char miCadena[20];
    printf("\nINICIO\n");
    utn_getTexto(miCadena, 20, "ingrese texto: ", "error");

    puts(miCadena);
    system("pause");



    return 0;
}
