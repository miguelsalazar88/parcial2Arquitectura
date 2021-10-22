// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa ordena un arreglo de enteros mediante seleccion. 

#include <stdio.h>

//Declaración de la función:
void sortSeleccion(int numeros[],int tamanio);
//Método main.

int main(){
    int numeross[] = {1,36,40,8,2, 3,40,30,9,10,15,2},i;    
    
    printf("El arreglo\n");
	for(i=0;i<12;i++)
    {
        printf("%d ",numeross[i]);
    }
     
	printf("\nOrdenado es:\n");
    sortSeleccion(numeross,12);
    return 0;
}

    //Definición de las funciones
    void sortSeleccion(int numeros[],int tamanio)
    {
        int i,j,inicial,final;
        for(i = 0; i < tamanio - 1; i++)
        {
            inicial=i;
            for(j = i + 1; j < tamanio; j++)
            {
                if(numeros[inicial] > numeros[j])
                inicial=j;
            }
            if(inicial != i)
            {
                final=numeros[i];
                numeros[i]=numeros[inicial];
                numeros[inicial]=final;
            }
        }   
        for(i=0;i<tamanio;i++)
        {
            printf("%d ",numeros[i]);
        }
        printf("\n");
    }
