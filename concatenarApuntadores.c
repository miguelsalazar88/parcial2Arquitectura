// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa concatena dos palabras usando apuntadores. 

#include <stdio.h>

//Declaración de la función:
void concatenar(char palabra1[],char palabra2[]);
//Método main.

int main(){
    char palabra1[6],palabra2[6];
    printf("Ingrese la primera palabra (debe tener maximo 5 caracteres)\n");
    scanf("%s", palabra1);
    printf("Ingrese la segunda palabra (debe tener maximo 5 caracteres)\n");
    scanf("%s", palabra2);
    concatenar(palabra1,palabra2);
    return 0;
}

//Definición de las funciones
void concatenar(char palabra1[],char palabra2[])
{
    char concatenar[12];
    char * concatenarC_0;
    concatenarC_0 = &concatenar[0];
    char * punteroP1_0;
    punteroP1_0 = palabra1;
    int i=0;
    char * punteroP2_0;
    punteroP2_0 = palabra2;
    
    while(*punteroP1_0){
      concatenarC_0[i++]=*punteroP1_0++;
    }
    while(*punteroP2_0){
      concatenarC_0[i++]=*punteroP2_0++;
    }
    concatenarC_0[i]='\0';
    printf("El resultado de concatenar la palabra %s con %s es: %s \n",palabra1,palabra2,concatenar);
}
