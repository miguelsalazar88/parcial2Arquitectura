// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa verifica si un número entero ingresado por el usuario es par o impar.

#include <stdio.h>
#include <stdbool.h>

// Declaración de la función:

bool esPar(int num);

// Método main.
int main(){

    // Se declaran las variables.

    int numUsuario = 0;

    //S e pide el ingreso de un número al usuario.

    printf("----  Bienvenido al programa que calcula si un número es par o impar ---- \n");
    printf("\n");
    printf("Introduzca un número entero: ");
    scanf("%d", &numUsuario);

    // Con base en el resultado de la función esPar, da una respuesta al usuario
    
    if(esPar(numUsuario)){
        printf("El número %d es par. \n", numUsuario);
    }

    else{
        printf("El número %d es impar. \n", numUsuario);
    }

    return 0;
}

//Definición de la función:

bool esPar(int num){
    if(num % 2 == 0){
        return true;
    }

    else{
        return false;
    }
}