// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa verifica si dos matrices son iguales;

#include <stdio.h>
#include <stdbool.h>

//Declaración de las funciones.

void inicializarMatriz(int n, int matriz[n][n], int valor);
void compararMatrices(int n, int matrizA[n][n], int matrizB[n][n]);
void imprimirMatriz(int n, int matriz[n][n]);

//Método main.
int main(){

    //Se declaran las variables. Matriz A y B serán iguales y Matriz C será distinta de A y B.

    int matrizA[3][3];
    int matrizB[3][3]; 
    int matrizC[3][3];

   printf("**** Bienvenido al programa que compara matrices **** \n");
   printf("\n");
   printf("Se inicializan dos matrices iguales y una diferente a las dos anteriores. \n");

   inicializarMatriz(3, matrizA, 1);
   inicializarMatriz(3, matrizB, 1);
   inicializarMatriz(3, matrizC, 3); 

   printf("Matriz 1 :\n"); 
   imprimirMatriz(3, matrizA);
   printf("Matriz 2 :\n"); 
   imprimirMatriz(3, matrizB);
   printf("Matriz 3 :\n"); 
   imprimirMatriz(3, matrizC);

    printf("Se comparan las matrices 1 y 2. \n");
    printf("Resultado: \n");
    compararMatrices(3,matrizA,matrizB);
    printf("\n");
    printf("Se comparan las matrices 1 y 3. \n");
    printf("Resultado: \n");
    compararMatrices(3,matrizA,matrizC);
    printf("\n");


    return 0;
}

//Definición de las funciones:

void inicializarMatriz(int n, int matriz[n][n], int valor){

    int i = 0;
    int j = 0;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            matriz[i][j]=valor;
        }
    }
}

void imprimirMatriz(int n, int matriz[n][n]){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    } 
    printf("\n");   
}

void compararMatrices(int n, int matrizA[n][n], int matrizB[n][n]){
    int i;
    int j;
    bool iguales = true;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if (matrizA[i][j] != matrizB[i][j]){
                iguales = false;
                break;
            }
        }
    }

    if(iguales){
        printf("Las dos matrices son iguales. \n");
    }
    else{
        printf("Las dos matrices son diferentes. \n");
    }

}
