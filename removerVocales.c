// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa remueve todas las vocales de un string.

#include <stdio.h>

//Declaración de la función:

void removerVocales(char string[]);

//Método main.
int main(){

    //Se declaran las variables.

    char palabra[25];

    //Se le pide al usuario que ingrese una palabra.

    printf("**** Bienvenido al programa que remueve todas las vocales de una palabra **** \n");
    printf("\n");
    printf("Por favor ingrese la palabra: ");
    scanf("%s", palabra);

    //Se implementa la lógica y se imprime el resultado:

    printf("Palabra original: %s\n", palabra);
    printf("Palabra sin vocales: ");
    removerVocales(palabra);


    return 0;
}

//Definición de la función:

void removerVocales(char string[]){
    int i;
    char c; //Se almacena el caracter que contiene el indice del string.

    for(i=0; i<25; i++){
        c = string[i];
        switch(c){
            case 'a':
                string[i] = (char) 0;
                break;
            case 'e':
                string[i] = (char) 0;
                break;
            case 'i':
                string[i] = (char) 0;
                break;
            case 'o':
                string[i] = (char) 0;
                break;
            case 'u':
                string[i] = (char) 0;
                break;  
            default:
                break;                  
        }
    }

    for(i=0; i<25; i++){
        printf("%c", string[i]);
    }
    printf("\n");
}