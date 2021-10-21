// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa efectúa el algoritmo de búsqueda lineal

#include <stdio.h>
#include <stdbool.h>
//Declaración de la función:

void busquedaLineal(int n, int tamanio, int arreglo[n]);

//Método main.
int main(){

    //Se declaran las variables.

    int arreglo[] = {15,29,32,45,65,38,51,90,23,64,86,48,92,46,89,44,33,55,76,10,1,3,5,7,9};

    printf("**** Bienvenido al programa que implementa un algoritmo de búsqueda lineal **** \n");
    printf("En algún lugar del arreglo se encuentra el número 65, y se buscará mediante este algoritmo. \n");

    printf("El arreglo es: \n");

    for(int i=0; i<25; i++){
        printf("%d  ",arreglo[i]);
    }
    printf("\n");
    
    printf("Se implementa el algoritmo... \n");
    busquedaLineal(65,25,arreglo);
    return 0;
}

//Definición de la función:

void busquedaLineal(int n, int tamanio, int arreglo[n]){
    int i;
    bool encontro = false;
    
    for(i = 0; i < tamanio; i++){
        if(arreglo[i] == n){
            encontro = true;
            printf("el numero %d se encuentra en la posición %d \n", n, i);
        }
    }

    if(!encontro){
        printf("El número no fue encontrado. \n");
    }

}
