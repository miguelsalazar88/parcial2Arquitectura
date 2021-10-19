// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa verifica la primera ocurrencia de un determinado caracter en 
// una palabra (string)

#include <stdio.h>
#include <stdbool.h>

//Declaración de la función:

void primeraOcurrencia(char c, char palabra[]);

//Método main.
int main(){

    //Declaración de variables.

    char palabra[25];
    char c;

    //Se le pide al usuario que ingrese una palabra.

    printf("**** Bienvenido al programa que busca la primera ocurrencia"); 
    printf("de un caracter en una palabra **** \n");
    printf("\n");
    printf("Por favor ingrese una palabra: ");
    scanf("%s", palabra);
    printf("Por favor ingrese el caracter que desea buscar: ");
    scanf(" %c", &c);

    //Se ejecuta la lógica del programa

    primeraOcurrencia(c,palabra);

    return 0;
}

//Definición de la función:

void primeraOcurrencia(char c, char palabra[]){
    bool encontrada = false;
    int i;

    for(i=0; i<25; i++){
        if(palabra[i] == c){
            encontrada = true;
            printf("\nLa primera ocurrencia de %c se encuentra en el indice %d de la palabra %s. \n", c, i, palabra);
        }
    }

    if(!encontrada){
        printf("\nEl caracter %c no se encuentra en la palabra. \n", c);
    }
}