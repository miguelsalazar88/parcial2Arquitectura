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

    int arreglo[] = {1,29,32,45,65,38,51,90,23,64,86,48,92,46,89,44,33,55,76,10,1,3,5,7,9};



    return 0;
}

//Definición de la función:

void busquedaLineal(int n, int tamanio, int arreglo[n]){
    int i;
    bool encontro = false;
    
    for(i = 0; i < n; i++){
        if(arreglo[i] == n){
            encontro = true;
            printf("el numero %d se encuentra en la posición %d", n, i);
        }
    }

    if(!encontro){
        printf("El número no fue encontrado. \n");
    }

}
