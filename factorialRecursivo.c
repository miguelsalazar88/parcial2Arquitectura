// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa encuentra el factorial de un numero usando recursion. 

#include <stdio.h>

//Declaración de la función:

int factorialR(int numero);
//Método main.

int main(){
    int numero,resul;
    printf("Ingrese el numero al que desea encontrar el factorial (int)\n");
    scanf("%d",&numero);
    resul=factorialR(numero);
    printf("El factorial del numero %d es: %d \n",numero,resul);

    return 0;
}

//Definición de las funciones
int factorialR(int numero)
{
    if(numero==0)
    {
        return 1;
    }
    else
    {
        return factorialR(numero-1)*numero;
    }
}