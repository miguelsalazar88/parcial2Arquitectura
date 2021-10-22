// Autores: Diego Bermúdez y Miguel Salazar
// Versión 1
// Este programa crea escribe y guarda un Archivo

#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 1000
//Declaración de la función:
//Método main.

int main(){
    FILE *arcv;
    char data[DATA_SIZE];
    arcv = fopen("Primer.txt","w");
    if(arcv == NULL)
    {
        printf("Archivo no creado.\n");
        exit(EXIT_FAILURE);
    }

    printf("Ingrese lo que desea guardar en el archivo : \n");
    fgets(data, DATA_SIZE, stdin);

    fputs(data, arcv);

    fclose(arcv);

    printf("Archivo creado y guardado correctamente. :) \n");

}


