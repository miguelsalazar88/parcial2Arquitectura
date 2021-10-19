// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa verifica si un número ingresado por el usuario es par o impar.

#include <stdio.h>
//Declaración de la función:

int numDigitos(int num);

//Método main.
int main(){

    //Declaración de la variable.

    int numero;

    //Se le pide al usuario que ingrese un entero.

    printf("**** Bienvenido al programa que calcula el numero de digitos en un entero. **** \n");
    printf("Por favor ingrese un numero entero: ");
    scanf("%d", &numero);

    //Se aplica la lógica y se imprime el resultado.

    printf("El número ingresado tiene %d digitos. \n", numDigitos(numero));

    return 0;
}

//Definición de la función:

int numDigitos(int num){
    int contador = 1;
    do{
        contador ++;
        num = num/10;  

    }while (num>=9);

    return contador;
}