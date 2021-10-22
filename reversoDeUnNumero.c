// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa muestra el reverso de un numero ingresado por el usuario

#include <stdio.h>

int rev(int numero);
//Método main.
int main(){

    //Se declaran las variables

    int numero;
    int reverso;

    //Se le pide al usuario que introduzca la cantidad de términos que desea conocer.

    printf("**** Bienvenido al programa que muestra el reverso de un numero **** \n");
    printf("\n");
    printf("Por favor introduzca el número entero positivo al que desea ver su reverso: ");
    scanf("%d", &numero);
    reverso=rev(numero);
    printf("El reverso del numero: %d es: %d", numero,reverso);

    return 0;
}
 //Mediante un do While, efectúa el reverso del numero.
    int rev(int numero)
    {
        int bandera=0;
        int reverso=0;
        do{
            bandera=numero%10;
            reverso=(reverso*10)+bandera;
            numero=numero-bandera;
            numero/=10;
        }while(numero>0);
        return reverso;
    }
    