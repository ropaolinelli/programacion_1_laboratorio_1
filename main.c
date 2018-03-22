#include <stdio.h>
#include <stdlib.h>

/**
*
*@param
*@return
*/

int main()
{
    int nombre;
    float sueldo;
    int porcentaje;
    float aumento;
    float sueldoConAumento;

    printf("Ingrese su nombre \n");
    scanf("%c",&nombre);

    printf("Ingrese su sueldo \n");
    scanf("%f",&sueldo);

    printf("Ingrese su porcentaje de aumento \n");
    scanf("%d",&porcentaje);

    aumento=(porcentaje*sueldo)/100;
    sueldoConAumento= sueldo+aumento;

    printf ("Su nombre es: %c",nombre);
    printf (" su sueldo es: %.1f", sueldo);
    printf (" su porcentaje de aumento es: %d", porcentaje);
    printf (" y su sueldo final es: %.1f" , sueldoConAumento);

    return 0;
}
