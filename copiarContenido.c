// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa lee un archivo de texto y lo escribe en un archivo vació.

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Se crea el pointer para leer el archivo.
    FILE * pointerLeer;
    FILE * pointerEscribir;

    //Se pone un puntero en modo de lectura y el otro en modo escritura.
    pointerLeer = fopen("archivoDeTexto.txt", "r");
    pointerEscribir = fopen("textoVacio.txt", "w");

    //Se crea un arreglo de caracteres que recibe cada linea.
    char linea[150];

    printf("**** Bienvenido al programa que lee un archivo de texto y lo escribe en otro archivo vacío **** \n");
    printf("\nEL texto escrito en el archivo archivoDeTexto.txt es: \n");

    //Se lee cada linea y se escribe en el archivo textoVacio.txt
    while(!feof(pointerLeer)){

        fgets(linea,150,pointerLeer); //Recibe la linea y la ubica en linea[]
        printf("%s \n", linea);
        fprintf(pointerEscribir,"%s",linea); //Escribe el texto en el nuevo archivo.
    }

    printf("Revisa ahora el archivo con nombre textoVacio.txt que se encuentra en este fichero.\n");
    //Cierra
    fclose(pointerLeer);

    return 0;
}
