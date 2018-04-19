#include <stdio.h>
#include <stdlib.h>
#include "funcionesVectores.h"

void ejemploCargaSecuencial(void)
{
    int listadoEdades[5]={22,33,44,11,55};
    int edad;
    float precio;
    float listadoPrecios[5];
    int i;

    for(i=0;i<5; i++)
    {
        printf("Ingrese su edad %d\n",i);
        scanf("%d",&listadoEdades[i]);
    }

    for(i=0;i<5; i++)
    {
        printf("\n %d : %d", i, listadoEdades[i]);
    }

    for(i=0;i<5; i++)
    {
        printf("Ingrese un precio %f\n",i);
        scanf("%f",&listadoPrecios[i]);
    }

    for(i=0;i<5; i++)
    {
        printf("\n %d : %f", i, listadoPrecios[i]);
    }


/*  edad=66;
    printf("%d\n",edad);
    printf("%d\n",&edad);

    printf("listado %d\n",&listadoEdades);
    printf("listado %d\n",listadoEdades);
    printf("listado[0] %d\n",listadoEdades[0]);
    printf("listado[0] %d\n",&listadoEdades[0]);
    printf("listado[4] %d\n",listadoEdades[4]);
    printf("listado[4] %d\n",&listadoEdades[4]);
    printf("listado[5] %d\n",listadoEdades[5]);
    printf("listado[5] %d\n",&listadoEdades[5]);
*/
}
