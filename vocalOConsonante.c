// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa verifica si un caracter ingresado por el usuario es vocal o consonante.

#include <stdio.h>

//Declaración de la función:

void vocalOConsonante(char c);

//Método main.
int main(){

    //Se declaran las variables.

    char c;

    //Se le pide al usuario ingresar un caracter.

    printf("**** Bienvenido al programa que verifica si un caracter es vocal o consonante **** \n");
    printf("Por favor ingrese un caracter en lower case: ");
    scanf("%c", &c);

    //Se implementa la lógica y se imprime el resultado.

    vocalOConsonante(c);

    return 0;
}

//Definición de la función:

void vocalOConsonante(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("El caracter ingresado es una vocal. \n");
    }
    else{
        printf("El caracter ingrasado es una consonante. \n");
    }
}