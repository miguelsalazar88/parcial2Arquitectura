// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa cuenta la cantidad de letras que tiene un string usando apuntadores. 

#include <stdio.h>

//Declaración de la función:
int conteo(char palabra1[]);
//Método main.

int main(){
    char palabra1[20];
    printf("Ingrese la palabra (debe tener maximo 20 caracteres)\n");
    scanf("%s",&palabra1);
    printf("La palabra %s tiene %d caracteres \n",palabra1,conteo(palabra1));
    return 0;
}

//Definición de las funciones
int conteo(char palabra1[])
{
    char * punteroP1_0;
    punteroP1_0 = palabra1;
    int i=0;
    while (*punteroP1_0++)
    {
        i+=1;
    }
    return i;
}