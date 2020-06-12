#include "main.h"

int main()
{
    char destino[20];
    char original[] = {"Hola, es la hora"};
    char *aux;

    aux = strcpy4(destino,original);
    printf("La cadena original es:      \"%s\"\n"
           "La cadena destino queda con  \"%s\"\n"
           "strcpy devolvio %p y la cadena destino esta en la direccion %p\n",
           original,destino,aux,destino);
    return 0;
}
