// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa usa la estructura switch para calcular operaciones entre dos números
// ingrasados por el usuario.

#include <stdio.h>

//Declaración de las funciones:

int suma(int uno, int dos);
int resta(int uno, int dos);
int multiplicacion(int uno, int dos);
double division(int uno, int dos);

//Método main.

int main(){

    int num1, num2, operacion;

    printf("**** Bienvenido al programa que hace operaciones con dos números **** \n");
    printf("\n");
    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);
    printf("\nIngrese el segundo número entero: ");
    scanf("%d", &num2);
    printf("Elija la operación que desea hacer con los dos números: \n");
    printf("1. Suma \n");
    printf("2. Resta \n");
    printf("3, Multiplicación \n");
    printf("4. División \n");
    scanf("%d", &operacion);

    switch(operacion){
        case 1:
            printf("La suma entre %d y %d es igual a %d \n", num1, num2, suma(num1,num2));
            break;
        case 2:
            printf("La resta entre %d y %d es igual a %d \n", num1, num2, resta(num1,num2));
            break;
        case 3:
            printf("La multiplicación entre %d y %d es igual a %d \n", num1, num2, multiplicacion(num1,num2));
            break;
        case 4:
            if(num2 == 0){
                printf("No es posible dividir un número sobre 0");
            }
            else{
                printf("La división entre %d y %d es igual a %f \n", num1, num2, division(num1,num2));
            
            }
            break;        
        default:
            printf("Opción errada, fin del programa.");
            break;
    }


    return 0;
    
}

//Definición de las funciones:

int suma(int uno, int dos){
    return uno + dos;
}
int resta(int uno, int dos){
    return uno - dos;
}
int multiplicacion(int uno, int dos){
    return uno * dos;
}
double division(int uno, int dos){
    return (double) uno / dos;
}
