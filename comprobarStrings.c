// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa comprueba que dos strings sean iguales usando apuntadores. 

#include <stdio.h>

//Declaración de la función:
void verificar(char palabra1[],char palabra2[]);
//Método main.

int main(){
    char palabra1[6],palabra2[6];
    printf("Ingrese la primera palabra (debe tener maximo 5 caracteres)\n");
    scanf("%s",&palabra1);
    printf("Ingrese la segunda palabra (debe tener maximo 5 caracteres)\n");
    scanf("%s",&palabra2);
    printf("El resultado de comprobar la palabra %s con %s es: \n",palabra1,palabra2);
    verificar(palabra1,palabra2);
    return 0;
}

//Definición de las funciones
void verificar(char palabra1[],char palabra2[])
{
    char * punteroP1_0;
    punteroP1_0 = palabra1;
    int i=0;
    char * punteroP2_0;
    punteroP2_0 = palabra2;
    
    do{
        if(*punteroP1_0!=*punteroP2_0)
        {
            i=1;
            break;
        }
    }while(*punteroP1_0++ && *punteroP2_0++);
    if(i==0)
    {
        printf("Son iguales");
    }
    if(i==1)
    {
        printf("NO son iguales");
    }
}