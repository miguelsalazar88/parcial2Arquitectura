// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa ordena un arreglo de enteros mediante insercion. 

#include <stdio.h>

//Declaración de la función:
void sortInsertion(int numeros[],int tamanio);
//Método main.

int main(){
    int numeross[] = {1,36,40,8,2, 3,40,30,9,10,15,2},i;
      
    printf("El arreglo \n");
    for(i=0;i<12;i++)
    {
    	printf("%d ",numeross[i]);
    }
        
	printf("\nOrdenado es:\n");
    sortInsertion(numeross,12);
    return 0;
}

    //Definición de las funciones
    void sortInsertion(int numeros[],int tamanio)
    {
        int i,j,bandera;
        for(i = 1; i < tamanio ; i++)
        {
            bandera=numeros[i];
            j=i-1;
            while (j>=0 && numeros[j] > bandera)
            {
                numeros[j+1] =numeros[j];
                j=j-1;
            }
            numeros[j+1]=bandera;
            
        }   
        for(i=0;i<tamanio;i++)
        {
            printf("%d ",numeros[i]);
        }
        printf("\n");
    }
