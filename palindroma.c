// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa verifica que una palabra sea palindroma. 

#include <stdio.h>

//Declaración de la función:
void palindroma(int tamanio,char palabra[]);
//Método main.

int main(){

    printf("Ingrese el tamaño de la palabra que desea analizar si es palindroma o no\n");
    int tamanio;
    scanf("%d",&tamanio);
    char palabra [tamanio];
    printf("Ingrese la palabra que desea analizar si es palindroma o no\n");
    scanf("%s", palabra);
    palindroma(tamanio,palabra);
    return 0;
}

//Definición de las funciones
void palindroma(int tamanio,char palabra[])
{
    int i,bandera=0;
    for(i=0;i<tamanio/2;i++)
    {
        if(palabra[i]!=palabra[tamanio-i-1])
        {
            bandera=1;
            break;
        }
    }
    if(bandera==1)
    {
        printf("La palabra no es palindroma");
    }
    else if (bandera==0)
    {        
        printf("La palabra es palindroma");
    }
    
}