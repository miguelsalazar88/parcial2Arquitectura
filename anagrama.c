// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa verifica que una palabra sea anagrama de otra. 

#include <stdio.h>

//Declaración de la función:
void anagrama(char palabra1[],char palabra2[]);
char* contiene(char letra,char palabra[],int tamanio);
//Método main.

int main(){
    char palabra1[6],palabra2[6];
    printf("Ingrese la primera palabra (debe tener 6 caracteres)\n");
    scanf("%s",&palabra1);
    printf("Ingrese la segunda palabra (debe tener 6 caracteres)\n");
    scanf("%s",&palabra2);
    anagrama(palabra1,palabra2);
    return 0;
}

//Definición de las funciones
void anagrama(char palabra1[],char palabra2[])
{
    int i;
    for(i=0;i<6;i++)
    {
        palabra2=contiene(palabra1[i],palabra2,6);
    }
    int bandera=0;
    for(i=0;i<6;i++)
    {
        if(palabra2[i]!='\0')
        {
            bandera=1;
            break;
        }
    }
    if(bandera==0)
    {
        printf("La palabra1 es anagrama de la palabra2");
    }
    if(bandera==1)
    {
        printf("La palabra1 no es anagrama de la palabra2");
    }
    
}

char* contiene(char letra,char palabra[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(palabra[i]==letra)
        {
            palabra[i]='\0';
            break;
        }
    }
    return palabra;
}