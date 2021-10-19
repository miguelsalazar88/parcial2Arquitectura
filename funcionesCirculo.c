// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa encuentra el diámetro, circunferencia y área de un círculo a partir
// del valor del radio que ingresa el usuario.

#include <stdio.h>

//Declaración de las funciones:

double diametro(double radio);
double circunferencia(double radio);
double area(double radio);

//Método main.
int main(){

    //Declaración de variables.

    double radio;

    //Se le pide al usuario que ingrese el valor del radio.

    printf("**** BIENVENIDO AL PROGRAMA QUE CALCULA DIAMETRO, CIRCUNFERENCIA Y AREA DE UN CIRCULO **** \n");

    printf("Por favor introduzca el valor del radio del círculo en metros: ");
    scanf("%lf", &radio);
    printf("\n");

    //Se ejecuta la lógica.

    printf("Resultados: \n");
    printf("Diámetro       = %f metros \n", diametro(radio));
    printf("Circumferencia = %f metros\n", circunferencia(radio));
    printf("Area           = %f metros cuadrados\n",area(radio));
    printf("\n");


    return 0;
}

//Definición de la función:

double diametro(double radio){
    return (radio * 2);
}
double circunferencia(double radio){
    return(3.1416 * radio);
}
double area(double radio){
    return(3.1416 * (radio * radio));
}

