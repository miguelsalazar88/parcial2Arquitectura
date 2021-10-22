// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa suma dos matrices.

#include <stdio.h>

//Declaración de las funciones:

void initMatriz(int n, int matriz[n][n],int y);
void imprimirMatriz(int n, int matriz[n][n]);
void sumaMatrices(int n, int matriz[n][n],int matriz2[n][n]);

//Método main.
int main(){

    //Declaración de las variables;
    int tamanio;

    //Se le pide al usuario pedir el tamaño de la matriz.

    printf("Por favor digite el tamaño de las matrices: ");
    scanf("%d", &tamanio);
    int matriz[tamanio][tamanio];
    int matriz2[tamanio][tamanio];
    //Se implementa la lógica y se muestran la matriz y el resultado de la suma.

    initMatriz(tamanio, matriz,1);
    initMatriz(tamanio, matriz2,3);
    printf("Las matrices son: \n");
    imprimirMatriz(tamanio, matriz);  
    printf("\n");
    imprimirMatriz(tamanio, matriz2);
    printf("La suma de las matrices es igual a: \n");
    sumaMatrices(tamanio,matriz,matriz2);
    
    return 0;
}

//Definición de la función:

void initMatriz(int n, int matriz[n][n],int y){
    int i = 0;
    int j = 0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            matriz[i][j] = y+i+j%(i+y);
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

void sumaMatrices(int n, int matriz[n][n],int matriz2[n][n]){
    int i = 0;
    int j = 0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           matriz2[i][j]+=matriz[i][j];
        }
    }
    imprimirMatriz(n,matriz2);
}