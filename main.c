#include <stdio.h>
#include <stdlib.h>

int contarPares (int[],int);
int buscarChar (char[], int, char);

int main()
{
    int vector[5]={5,2,9,6,4};
    char letras[5]={'f','g','i','m','u'};
    int indexLetra;
    int cantidad;

    cantidad=contarPares(vector,5);
    indexLetra= buscarChar(letras, 5, 'a');
    if(indexLetra==-1)
    {
        printf("no se encuentra el caracter\n");
    }
    else
    {
        printf("El caracter se encuentra en el array\n");
    }
    printf("index: %d\n",indexLetra);
    printf("cantidad de pares: %d", cantidad);
    return 0;
}

int buscarChar (char array[], int cantidad, char caracter)
{
    int index= -1;
    int i;
    for (i=0;i<cantidad;i++)
    {
        if(array[i]==caracter)
        {
            index=i;
            break;
        }
    }
    return index;
}

int contarPares (int array[],int cantidad)
{
    int contadorPares=0;
    int i;
    for(i=0;i<cantidad;i++)
    {
       if(array[i]%2==0)
       {
           contadorPares++;
       }
    }
    return contadorPares;
}
