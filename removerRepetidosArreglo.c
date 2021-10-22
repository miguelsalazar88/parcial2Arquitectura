// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa elimina los caracteres repetidos en un string. 

#include <stdio.h>

//Declaración de la función:

void remover(int numero[],int n[],int tamanio);
int contiene(int n,int numeros[],int tamanio);
//Método main.

int main(){
    int numeross[] = {1,36,40,8,2, 3,40,30,9,10,15,2},n[12],i;    
    
    printf("El arreglo\n");
	for(i=0;i<12;i++)
    {
        printf("%d ",numeross[i]);
        n[i]=0;
    }
    
	printf("\nSin numeros repetidos es: \n",numeross);
    remover(numeross,n,12);
    return 0;
}

//Definición de las funciones

void remover(int numeros[],int n[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(numeros[i]!=0 && contiene(numeros[i],n,12)==0)
        {
            n[i]=numeros[i];
        }
    }
    for(i=0;i<tamanio;i++)
    {
        if(n[i]!=0)
        {
            printf("%d ",n[i]);
        }
    }
}

int contiene(int n,int numeros[],int tamanio)
{
    int i;
    int bandera=0;
    for(i=0;i<tamanio;i++)
    {
        if(numeros[i]==n)
        {
            bandera=1;
            break;
        }
    }
    return bandera;
}
