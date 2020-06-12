#include "cadena.h"

char *strcpy1(char *dest,const char *orig)
{
    char *aux = dest;

    while(*orig){
        *dest = *orig;
        dest++;
        orig++;
    }
    *dest = '\0';
    return aux;
}

char *strcpy2(char *dest,const char *orig)//PERDIDA DE EFICIENCIA
{
    char *aux = dest;

    while(*orig){
        *dest = *orig;
        dest++;
        orig++;
    }
    *dest = *orig;
    return aux;
}

char *strcpy3(char *dest,const char *orig)//PERDIDA DE EFICIENCIA
{
    char *aux = dest;

    while((*dest = *orig)!= '\0'){
        dest++;
        orig++;
    }
    return aux;
}

char *strcpy4(char *dest,const char *orig)//PERDIDA DE EFICIENCIA
{
    char *aux = dest;

    while((*dest++ = *orig++)!= '\0')
        ;

    return aux;
}

