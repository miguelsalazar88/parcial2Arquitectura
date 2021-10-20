// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa verifica si dos strings ingresados son iguales o no.

#include <stdio.h>
#include <stdbool.h>
//Declaración de la función:

void comparaStrings(int n, char string1[], char string2[]);

//Método main.
int main(){

    //Se declaran las variables.

    char palabra1[25];
    char palabra2[25];

    printf("**** Bienvenido al programa que compara dos palabras **** \n");
    printf("\n");

    //Se le pide al usuario que ingrese dos palabras.
    printf("Por favor ingrese la primera palabra: ");
    scanf("%s", palabra1);
    printf("Por favor ingrese la segunda palabra: ");
    scanf("%s", palabra2);
    printf("Palabra 1: %s \n", palabra1);
    printf("Palabra 2: %s \n", palabra2);

    //Se aplica la lógica y se imprime el resultado.

    comparaStrings(25, palabra1, palabra2);


    return 0;
}

//Definición de la función:

void comparaStrings(int n, char string1[], char string2[]){
    int i;
    int j;
    bool iguales = true;

    for(i=0; i<n; i++){

        //Esta estructura if es necesaria porque termina el bucle cuando aparecen 
        //caracteres vacíos.
        if(string1[i]=='\0' || string2 == '\0'){
            break;
        }
        
        else if(string1[i] != string2[i] ){
            iguales = false;
            break;
            
        }
        
    }

    if(iguales){
        printf("Las dos palabras son iguales.\n");
    }
    else{
        printf("Las dos palabras son diferentes.\n");
    }
}