// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa efectúa el algoritmo de búsqueda binaria.

#include <stdio.h>
//Declaración de la función:

int busquedaBinaria(int array[], int indexInicio, int indexFinal, int num);

//Método main.
int main(){

    //Se declaran las variables.
    int i, numero;

    //Se declara el arreglo en el que se va a efectuar la búsqueda y se carga.
    int arreglo[200];

    for(i = 0; i<200; i++){
        arreglo[i] = i;
    }

    printf("**** Bienvenido al programa que implementa el algoritmo de búsqueda binaria. \n");
    printf("\n");
    printf("Por favor ingrese un número entre 1 y 200: ");
    scanf("%d", &numero);
    busquedaBinaria(arreglo, 0, 199, numero);

    //Se le pide al usuario que ingrese un número entre 1 y 200.

    return 0;
}

//Definición de la función:

int busquedaBinaria(int array[], int indexInicio, int indexFinal, int num){

    int iteraciones = 1;
   
    while (indexInicio <= indexFinal){

      printf("%d iteraciones. \n", iteraciones);  

      int mitad = indexInicio + (indexFinal- indexInicio )/2;
        if (array[mitad] == num){
            iteraciones++;
            printf("Número %d entontrado después de %d iteraciones. \n", num, iteraciones);
            return mitad;
        }
        if (array[mitad] < num){
            indexInicio = mitad + 1;
            iteraciones++;
        }    
        else{
            indexFinal = mitad - 1;
            iteraciones++;
        }
    }
    printf("Número no encontrado. \n");
    return -1;
}
