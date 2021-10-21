// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa lee un archivo de texto y lo imprime en la consola.

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Se crea el pointer para leer el archivo.
    FILE * pointerFile;

    //Se pone en modo de lectura.
    pointerFile = fopen("archivoDeTexto.txt", "r");

    //Se crea un arreglo de caracteres que recibe cada linea.
    char linea[150];

    printf("**** Bienvenido al programa que lee archivos de texto. **** \n");
    printf("\nEL texto escrito en el archivo archivoDeTexto.txt es: \n");

    //Se imprime cada linea hasta que se termine el archivo.
    while(!feof(pointerFile)){

        fgets(linea,150,pointerFile); //Recibe la linea y la ubica en linea[]
        puts(linea); //Lo escribe en consola
    }

    //Cierra
    fclose(pointerFile);

    return 0;
}
