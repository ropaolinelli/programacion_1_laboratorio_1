#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra1[15]; // se pueden ingresar hasta 15 caracteres, incluyendo el /0
    char palabra2[15];
    char buffer [1024];
    int comp;
    int cant;

    printf("Ingrese una palabra: ");
    fflush(stdin); //se tiene que agregar siempre que usemos cadenas de caracteres
    gets(buffer); //se utiliza para leer una cadena (en reemplazo del scanf)

    while(strlen(buffer)>14)
    {
        printf("Reingrese una palabra: ");
        fflush(stdin);
        gets(buffer);

    }

    //cant= strlen(palabra1);//se usa para contar la cantidad de caracteres que hay
    strcpy(palabra1, buffer); //copia una cadena en otra (se tiene que agregar la biblioteca #include <string.h>)
    strcpy(palabra2, "gato");
    comp= strcmp(palabra1,palabra2);//se usa para comparar los caracteres
    strupr(palabra1);//convierte todo a mayuscula
    strlwr(palabra2);//convierto todo a minuscula
    strcat(buffer);//se usa `para unir palabras

    printf("El resultado de la comparacion es: %d\n", comp);
    printf("Cant de caracteres en palabra1: %d\n",cant);//se cuenta la cantidad de caracteres(incluido los espacios)
    printf(" Palabra 2: %s\n",buffer); //ambas tienen que decir lo mismo
    printf(" Palabra 1: %s\n",palabra1);


    return 0;
}
