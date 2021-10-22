 //Autores: Alejandro Bermúdez y Miguel Salazar
//Versión: 1
//Este es un programa que calcular que numero de los dos ingresados que es mayor;

#include <stdio.h>

//Declaración de la función:

void max(int a,int b);

//Main del programa:

int main() {

    // Declaración de Variables:

    int a;
    int b;

    //Leer datos del usuario:
    printf("**** Bienvenido al programa para el numero mayor entre dos numeros enteros**** \n");
    printf("\nEscriba el primer numero:");
    scanf("%d",&a);
    printf("\nEscriba el segundo numero:");
    scanf("%d",&b);

    printf("El numero mayor entre  %d y %d es: \n",a,b);
    max(a,b);
    return 0;
}

//Definición de la función.

void max(int a,int b){

    int resultado=0;
    if(a>b)
    {
        resultado=a;
        printf("%d",resultado);
    }
    if(a<b)
    {
        resultado=b;
        printf("%d",resultado);
    }
    if(resultado==0)
    {
        printf("Son iguales por lo tanto no hay numero mayor");
    }


}
