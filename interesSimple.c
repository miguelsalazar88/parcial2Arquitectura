// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa calcula el interés simple de un préstamo.

#include <stdio.h>
//Declaración de la función:

double interesSimple(unsigned long valor, int tasa, int tiempo);

//Método main.
int main(){

    //Declaración de variables.

    unsigned long valor;
    int tasa, tiempo;
    double total, interes;

    //Se le pide al usuario que ingrese los datos del préstamo:

    printf("**** Bienvenido al programa que calcula el interés simple de un préstamo **** \n");
    printf("\n");
    printf("Por favor ingrese el valor del préstamo en pesos: $");
    scanf("%lu", &valor);
    printf("Por favor ingrese la tasa de interés en porcentaje: ");
    scanf("%d", &tasa);
    printf("Por favor ingrese el tiempo en años: ");
    scanf("%d", &tiempo);

    //Se implementa la lógica y se imprime el resultado.


    printf("------------------------------------------------ \n");
    interes = interesSimple(valor, tasa, tiempo);
    total = (double)valor + interes;
    printf("El valor del interés a pagar será de: $ %lf \n", interes);
    printf("El gran total a pagar será de: $ %lf \n", total);
    
    printf("");


    return 0;
}

//Definición de la función:

double interesSimple(unsigned long valor, int tasa, int tiempo){
    return (double) (valor * tasa * tiempo/100);
}
