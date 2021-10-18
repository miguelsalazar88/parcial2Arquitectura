//Autores: Alejandro Bermúdez y Miguel Salazar
//Versión: 1
//Este es un programa que calcula el factorial de un número entero positivo;

#include <stdio.h>

//Declaración de la función:

int factorial(int numero);

//Main del programa:

int main() {

    // Declaración de Variables:

    int numeroUsuario;

    //Leer dato del usuario:
    printf("**** Bienvenido al programa para calcular el factorial de un número entero positivo **** \n");
    printf("\nEscriba un número entero positivo para calcular su factorial:");
    scanf("%d", &numeroUsuario);

    printf("El factorial de %d es: %d",numeroUsuario, factorial(numeroUsuario));
    return 0;
}

//Definición de la función.

int factorial(int numero){

    int resultado =1, i;

    for(i=1; i <= numero; i++){
        resultado = resultado * i;
    }
    return resultado;
}




