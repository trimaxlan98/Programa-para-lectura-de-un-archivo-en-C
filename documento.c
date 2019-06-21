#include <stdio.h>
#include <stdlib.h>

//programa para leer un archivo

int main()
{
	FILE *archivo;
	char caracter;
	
	archivo = fopen("prueba.txt","r");
	
	if (archivo == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else
        {
            printf("\nEl contenido del aarchivo es: \n\n");
            while((caracter = fgetc(archivo)) != EOF){
		printf("%c",caracter);
	    }
        }
        fclose(archivo);
	return 0;
}

