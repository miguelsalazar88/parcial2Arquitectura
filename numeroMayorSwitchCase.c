    	// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa encuentra el numero mayor con respecto a dos numeros usando switch case. 

#include <stdio.h>

//Declaraci�n de la funci�n:

void max(int a,int b);

//Main del programa:

int main() {

    // Declaraci�n de Variables:

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

//Definici�n de la funci�n.

void max(int a,int b){

    int bandera=0;
    if(a<b)bandera=1;
    if(b<a)bandera=2;
    switch(bandera)
    {
    	case 1:
    		printf("%d",b);
    		break;
    	case 2:
    		printf("%d",a);
    		break;
    	default:
    		printf("Son iguales");
    		break;
	}
}

