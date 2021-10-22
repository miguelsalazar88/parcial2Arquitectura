// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa elimina los caracteres repetidos en un string. 

#include <stdio.h>

//Declaración de la función:

void remover(char palabra[],char p[],int tamanio);
int contiene(char letra,char palabra[],int tamanio);
//Método main.

int main(){
    char palabra[20],p[20];
    int i;
    printf("Ingrese la palabra (debe tener 20 caracteres)\n");
    scanf("%s",&palabra);
    printf("La palabra %s sin letras repetidas es: ",palabra);
    for(i=0;i<20;i++)
    {
        if(palabra[i]=='\n')
        {
            palabra[i]='0';
        }
        p[i]='0';
    }
    remover(palabra,p,20);
    return 0;
}

//Definición de las funciones

void remover(char palabra[],char p[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(palabra[i]!='0' && contiene(palabra[i],p,20)==0)
        {
            p[i]=palabra[i];
        }
    }
    for(i=0;i<tamanio;i++)
    {
        if(p[i]!='0')
        {
            printf("%c",p[i]);
        }
    }
}

int contiene(char letra,char palabra[],int tamanio)
{
    int i;
    int bandera=0;
    for(i=0;i<tamanio;i++)
    {
        if(palabra[i]==letra)
        {
            bandera=1;
            break;
        }
    }
    return bandera;
}