// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa suma de forma recursiva todos los elementos en un arreglo. 

#include <stdio.h>

//Declaración de la función:

int sumaDeArray(int arr[],int inicio, int tamanio);

//Método main.

int main(){

    //Declaración de las variables:

    int  arreglo[10];
    int tamanio, i;

    //Se le pide al usuario determinar el tamaño del arreglo y los valores;

    printf("Por favor ingrese el tamaño del arreglo (entre 1 y 10):");
    scanf("%d", &tamanio);
    
    for(i=0; i < tamanio; i++){
        printf("Ingrese el valor del elemento %d del arreglo: ", i+1);
        scanf("%d", &arreglo[i]);
    }
    printf("\n");
    printf("La suma de todos los elementos del arreglo es %d \n", sumaDeArray(arreglo, 0, tamanio));

    return 0;
}

//Definición de la función:

int sumaDeArray(int arr[], int inicio, int tamanio){

    if(inicio >= tamanio){
        return 0;
    }

    else{
        return(arr[inicio] + sumaDeArray(arr, inicio+1, tamanio));
    }
}