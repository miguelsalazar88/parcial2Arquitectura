// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa remueve todos los elementos duplicados en un arreglo.

#include <stdio.h>

//Declaración de las funciones:

void imprimirArreglo(int arr[], int tamanio);
void removerDuplicados(int arr[], int tamanio);

//Método main.
int main(){

    //Se declara el arreglo con varias repeticiones del número 1.

    int arr[] = {1,2,3,1,4,2,1,6,1};
    int tamanio = 9;

    //Se aplica la lógica y se imprime el resultado.

    printf("Arreglo original: \n");
    imprimirArreglo(arr, tamanio);
    printf("\n");
    printf("Arreglo sin elementos repetidos: \n");
    removerDuplicados(arr, tamanio);
    printf("\n");

    return 0;
}

//Definición de las funciones:

void imprimirArreglo(int arr[], int tamanio){
    int i;
    for(i=0; i<tamanio; i++){
        printf("%d  ",arr[i]);
    }

}

void removerDuplicados(int arr[], int tamanio){
    int i;
    int j;
    int k;

    for(i = 0; i<tamanio; i++){ //Recorre el arreglo
        for(j = 0; j < tamanio; j++){ //Segundo recorrido para comparar
            if(j != i){ //i tiene que ser distinto a j porque siempre va a ser duplicado
                if(arr[i] == arr[j]){ //comfirma si es igual   
                    for(k = 0; k < tamanio; k++){
                        arr[j] = arr[j+1];
                    }
                    tamanio --; //Disminuye el tamaño del arreglo;
                }
            }
        }
    }

    imprimirArreglo(arr, tamanio);
}