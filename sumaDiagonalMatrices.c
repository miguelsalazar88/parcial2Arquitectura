// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa suma las diagonales de una matriz.

#include <stdio.h>

//Declaración de las funciones:

void initMatriz(int n, int matriz[n][n]);
void imprimirMatriz(int n, int matriz[n][n]);
int sumaDiagonales(int n,int matriz[n][n]);


//Método main.
int main(){

    //Declaración de las variables;
    int tamanio;

    //Se le pide al usuario pedir el tamaño de la matriz.

    printf("Por favor digite el tamaño de la matriz: ");
    scanf("%d", &tamanio);
    int matriz[tamanio][tamanio];
    
    //Se implementa la lógica y se muestran la matriz y el resultado de la suma.

    initMatriz(tamanio, matriz);
    printf("La matriz es: \n");
    imprimirMatriz(tamanio, matriz);
    printf("La suma de las diagonales de la matriz es igual a: %d \n", sumaDiagonales(tamanio,matriz));

    return 0;
}

//Definición de la función:

void initMatriz(int n, int matriz[n][n]){
    int i = 0;
    int j = 0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            matriz[i][j] = 1;
        }
    }
}

void imprimirMatriz(int n, int matriz[n][n]){
    int i;
	int j;
	for( i=0; i<n;i++){
	
		for( j=0; j<n;j++){
			
            printf("%i\t", matriz[i][j]);
		
		}
		printf("\n");
	}

}

int sumaDiagonales(int n, int matriz[n][n]){
    int i = 0;
    int j = 0;
    int suma =0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i == j){
                suma = suma + matriz[i][j];
            }
            if(i+j == n){
                suma = suma + matriz[i][j];
            }
        }
    }
    return suma;
}