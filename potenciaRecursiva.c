// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa encuentra la potencia de un numero usando recursion. 

#include <stdio.h>

//Declaración de la función:

int potenciaR(int numero,int potencia);
//Método main.

int main(){
    int numero,potencia;
    printf("Ingrese el numero que desea potenciar\n");
    scanf("%d",&numero);
    printf("Ingrese la potencia que desea realizar (int)");
    scanf("%d",&potencia);
    printf("La potencia %d del numero %d es:",potencia,numero);
    if(potencia<0)
    {
        potencia=potencia*(-1);
        double p=potenciaR(numero,potencia);
        double d=1/p;
        printf("%f",d);
    }
    else
    {
        printf("%d",potenciaR(numero,potencia));
    }
    return 0;
}

//Definición de las funciones
int potenciaR(int numero,int potencia)
{
    if(potencia==0)
    {
        return 1;
    }
    if(potencia>0)
    {
        return potenciaR(numero,potencia-1)*numero;
    }
}