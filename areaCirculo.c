 //Autores: Alejandro Bermúdez y Miguel Salazar
//Versión: 1
//Este es un programa que calcula el area de un circulo;

#include <stdio.h>

//Declaración de la función:

float area(float radio);

//Main del programa:

int main() {

    // Declaración de Variables:

    float radio;

    //Leer dato del usuario:
    printf("**** Bienvenido al programa para calcular el area de un circulo **** \n");
    printf("\nEscriba un número de coma flotante que haga referencia a el radio del circulo para calcular su area:");
    scanf("%f", &radio);

    printf("El area de el circulo con radio %f es: %f \n",radio, area(radio));
    return 0;
}

//Definición de la función.

float area(float radio){

    float resultado = radio*radio*3.141592;

    return resultado;
}
