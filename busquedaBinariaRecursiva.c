// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa busca si un numero se encuentra contenido en un arreglo predeterminado. 

#include <stdio.h>

//Declaración de la función:
int busqueda(int numeros[],int indI,int indF,int x);
//Método main.

int main(){
   int numeros[] = {2, 3,4,5,6,7, 9, 11,13,45, 440};
   int n = sizeof(numeros)/ sizeof(numeros[0]);
   int x ;
   printf("Ingrese el numero a buscar \n");
   scanf("%d",&x);
   int result = busqueda(numeros, 0, n-1, x);
   //Otra manera de preguntar un if///
   (result == -1)? printf("Elemento no presente en el arreglo")
                 : printf("Elemento presente en el arreglo en el indice: %d", result);
   return 0;
}

//Definición de las funciones
int busqueda(int numeros[],int indI,int indF,int x)
{
	if (indF >= indI)
   {
        int mid = indI + (indF - indI)/2;
  
        if (numeros[mid] == x)  return mid;
  
        if (numeros[mid] > x) return busqueda(numeros, indI, mid-1, x);
  
        return busqueda(numeros, mid+1, indF, x);
   }
  
   return -1;//Valor bandera para indicar que no se encuentra 
}
