// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa que genera las tablas de multiplicar.

#include <stdio.h>
//Declaración de la función:

void tablaMultiplicacion(int n);

//Método main.
int main(){

    //Se declaran las variables.

    int numero;

    //Se le pide al usuario que ingrese el número del que desea ver la tabla de multiplicar.

    printf("**** Bienvenido al programa que imprime las tablas de multiplicar. \n");
    printf("\n");
    printf("Ingrese por favor el número del que desea ver la tabla de multiplicar: ");
    scanf("%d", &numero);

    //Se aplica la lógica y se imprime el resultado.

    tablaMultiplicacion(numero);

    return 0;
}

//Definición de la función:

void tablaMultiplicacion(int n){
    int i = 0;
    int resultado = 0;

    for(i=1; i<=10; i++){
        resultado = n * i;
        printf("%d X %d = %d \n", n, i, resultado);
    }
}