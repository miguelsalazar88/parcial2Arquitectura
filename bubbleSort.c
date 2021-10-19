// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa implementa el algoritmo Bubble Sort en un arreglo;

#include <stdio.h>
#include <stdbool.h>

//Declaración de la función:

void bubbleSort(int arreglo[], int tamanio);

//Método main.
int main(){

    //Declaración de variables.

    int arr[] = {1,7,6,8,9,0,4,2,5,3,4};
    int tamanio = 10, i;

    //Se muestra el arreglo sin ordenar.

    printf("Arreglo sin ordenar: \n");
    for(i = 0; i < tamanio; i++){
        printf("a[%d] = %d \n", i, arr[i]);
    }

    //Se muestra el arreglo ordenado después de aplicar el algoritmo.

    bubbleSort(arr,tamanio);

    printf("Arreglo ordenado: \n");

    for(i = 0; i < tamanio; i++){
        printf("a[%d] = %d \n", i, arr[i]);
    }

    printf("\n");

    return 0;
}

//Definición de la función:

void bubbleSort(int arreglo[], int tamanio){
    
    bool hayCambio = false;
    int i;
    int j;
    do{

        hayCambio=false; //Este booleano verifica si hay algún cambio de indices en el arreglo.
        for(i = 0; i < tamanio; i++){
            for(j = 0; j < (tamanio-1-i); j++){
                if(arreglo[j] > arreglo[j+1]){
                    int temporal = arreglo[j];
                    arreglo[j] = arreglo[j+1];
                    arreglo[j+1] = temporal;
                    hayCambio = true; 
                }

            }
        }

    } while(hayCambio);

}