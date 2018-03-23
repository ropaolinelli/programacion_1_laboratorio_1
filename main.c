#include <stdio.h>
#include <stdlib.h>
/*se ingresan numeros  (ser distintos de 0), no se saben cuantos.
se pide mostrar:
    *cantidad de pares e impares
    *porcetaje positivos y negativos
    *maximo y minimo
    *maximo numero par
    *cantidad de numeros comprendidos entre 125 y 236*/

int main()
{
    int numero;
    char respuesta = 's';

    int pares=0;
    int impares=0;
    int flagPar=0;

    int maximo , minimo;
    int flag=0;
    int maximoPar=0;

    int positivos=0;
    int negativos=0;
    int contadorNumeros=0;
    float porcentajePositivos;
    float porcentajeNegativos;

    int cantidad=0;


   do
    {
        printf("\n\nIngrese un numero: ");
        scanf("%d" ,&numero);

        while(numero == 0)
            {
                printf("Error. Ingrese otro numero");
                scanf("%d",&numero);
            }

        printf("\ndesea continuar? ");
        respuesta = getche();

        if(numero % 2 ==0)
            {
                pares++;
            }
        else
            {
                impares++;
            }
        if(numero>maximo || flag==0)
            {
                maximo=numero;
            }
        if(numero<minimo || flag==0)
            {
                minimo=numero;
                flag=1;
            }
        if(numero > 0)
            {
                positivos++;
            }
        else
            {
                negativos++;
            }
        if(numero >= 125 && numero <=236)
            {
                cantidad++;
            }


    }while(respuesta != 'n');

    contadorNumeros= positivos + negativos;
    porcentajePositivos=(float) (positivos * 100 )/ contadorNumeros;
    porcentajeNegativos= 100 - porcentajePositivos;

    printf("\n\n Los numeros pares son: %d\n" , pares);
    printf("\n\n Los numeros impares son: %d\n" , impares);
    printf("\n\n El numero  mayor es: %d\n", maximo);
    printf("\n\n El numero  menor es: %d\n", minimo);
    //printf("\n\n El mayor numero par es: %d\n" , maximoPar);
    printf("\n\n El porcentaje de numeros positivos es: %2.f\n", porcentajePositivos);
    printf("\n\n El porcentaje de numeros negativos es: %2.f\n", porcentajeNegativos);
    printf("\n\n La cantidad de numeros entre 125 y 236 es: %d\n", cantidad);


    return 0;
}
