#include <stdio.h>
#include <stdlib.h>
//1er paso
float dividir (float numeroUno , float numeroDos);
int sumar (int numeroUno ,int numeroDos);
int pedirNumeroPar ();
int getEntero (char* mensaje, char* mensajeError, int minimo, int maximo);

//2do paso
int main()
{
    int numero;
    numero= sumar (3,3);
    printf("La suma es: %d", numero);

    float numeroD;
    numeroD= dividir (10 , 3);
    printf(" La division: %f", numeroD);

    int sePudo;
    sePudo= pedirNumeroPar();
    if(sePudo==0)
    {
        printf("ok");
    }
    else
    {
        printf("mal");
    }

    int numero2;
    numero2=getEntero("Ingrese su edad", "Error, debe ser entre 1 y 199", 1, 199);
    printf("El entero ingresado es: %d", numero2);
    return 0;

}
//3er paso

//suma
int sumar (int numeroUno ,int numeroDos)
{
   int resultado;

   resultado= numeroUno+numeroDos;

   return resultado;

}
//division
float dividir (float numeroUno , float numeroDos)
{
    float resultado;
    resultado= numeroUno/numeroDos;
    return resultado;
}
//numero par
int pedirNumeroPar()
{
    int resultado=-1;
    int numero;
    printf(" Ingrese numero par: ");
    scanf("%d",&numero);
    if(numero/2==0 || numero !=0)
    {
        resultado=0;
    }
    return resultado;
//edad
int getEntero (char* mensaje, char* mensajeError, int minimo, int maximo)
{
    int retorno=-1;
    do {
        printf("%s", mensaje);
        scanf("%d",&retorno);
        if(retorno<maximo && retorno>minimo)
        {
            break;
        }
        printf("%s", mensajeError);
    }while (1==1);
    return retorno;
}

}





