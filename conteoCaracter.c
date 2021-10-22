// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa cuenta la cantidad de veces que aparece un caracter en un string. 

#include <stdio.h>

//Declaración de la función:
int conteo(char palabra[],char letra,int tamanio);
//Método main.

int main(){
    char palabra[6],letra;
    printf("Ingrese la letra que desea contar \n");
    scanf("%c",&letra);
    printf("Ingrese la palabra (debe tener maximo 6 caracteres)\n");
    scanf("%s", palabra);
    int cantidad=0;
    cantidad=conteo(palabra,letra,6);
    printf("La letra %c se encuentra %d veces en la palabra %s ",letra,cantidad,palabra);
    return 0;
}

//Definición de las funciones

int conteo(char palabra[],char letra,int tamanio)
{
    int i,cantidad=0;
    for(i=0;i<tamanio;i++)
    {
        if(palabra[i]==letra)
        {
            cantidad+=1;
        }
    }
    return cantidad;
}