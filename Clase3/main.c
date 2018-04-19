#include <stdio.h>
#include <stdlib.h>
#include "funcionesVectores.c"
#include "funcionesVectores.h"

int main()
{
    int listadoPrecio[5];
    int indice;
    float precioAux;

    indice=dameUnEnteroEntre[0,4];
    precioAux=dameUnFlotanteEntre[1,1000];
    listadoPrecio[indice]=precioAux;

    for(i=0; i<5; i++)
    {
        printf("precio: %f",listadoPrecio[i]);
    }
    return 0;
}
