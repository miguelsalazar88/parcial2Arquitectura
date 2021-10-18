// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa muestra la cantidad de términos de la serie de Fibonacci introducida por
// el usuario

#include <stdio.h>


//Método main.
int main(){

    //Se declaran las variables

    int primero = 0, segundo = 1, i=3, n, suma;

    //Se le pide al usuario que introduzca la cantidad de términos que desea conocer.

    printf("**** Bienvenido al programa que muestra la serie de Ficobacci **** \n");
    printf("\n");
    printf("Por favor introduzca el número de términos de la serie que desea ver: ");
    scanf("%d", &n);
    printf("%d   %d", primero, segundo);

    //Mediante un loop While, efectúa la serie de fibonacci a partir del tercer valor.
     
    while(i<=n){
        suma = primero + segundo; //Suma los dos numeros anteriores de la serie.
        printf("    %d", suma); //Imprime la suma de los dos numeros anteriores.
        primero = segundo;
        segundo = suma;
        i = i+1; //Incrementa el contador por uno.
    }
    printf("\n");
    return 0;
}
