// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa implementa el algoritmo Merge Sort.

#include <stdio.h>
//Declaración de la función:

void selectionSort(int n, int arr[n]);

//Método main.
int main(){

    //Se declaran las variables.
    int i=0, n=20;
    int arreglo[20] = {1,78,9,4,56,34,66,70,99,21,3,45,63,94,0,12,10,98,79,33};

    printf("**** Bienvenido al programa que implementa el algoritmo Selection Sort ****\n");

    //Se imprime el arreglo sin ordenar.
    printf("Arreglo sin ordenar: \n");

    for(i=0; i<n; i++){
        printf(" [%d] ", arreglo[i]);
    }
    printf("\n");

    //Se aplica la lógica y se imprime el arreglo ordenado.
    printf("Arreglo ordenado con Selection Sort: \n");
    selectionSort(n,arreglo);
    printf("\n");
    return 0;
}

//Definición de la función:

void selectionSort(int n, int arr[n]){

    int i, j, posicion, cambio;
    for (i = 0; i < (n - 1); i++) {
        posicion = i;
        for (j = i + 1; j < n; j++) {
            if (arr[posicion] > arr[j]){
                posicion = j;
            }    
        }
        if (posicion != i) {
            cambio = arr[i];
            arr[i] = arr[posicion];
            arr[posicion] = cambio;
        }
    }

    for (i = 0; i < n; i++){
        printf(" [%d] ", arr[i]);
    }    
}