#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

float aplicarDescuento (float precio)
{
	return precio - precio*0.05;
}


int contarCaracteres(char string[], char letra)
{
	int contarLetra = 0;
	for(int i = 0; i < strlen(string); i++)
	{
		if(string[i] == letra)
		{
			contarLetra++;
		}
	}
	return contarLetra;
}

void ordenarNote(eNotebook note[], int tam)
{
	eNotebook auxNote;

	for (int i = 0; i < tam - 1; i++)
	{
		for (int j = i + 1; j < tam; j++)
		{
			if(strcmp(note[i].marca,note[j].marca)>0)
			{
				auxNote = note[i];
				note[i] = note[j];
				note[j] = auxNote;
			}
			if(strcmp(note[i].marca,note[j].marca) == 0 && note[i].precio > note[j].precio )
			{
				auxNote = note[i];
				note[i] = note[j];
				note[j] = auxNote;
			}
		}
	}
	listarNote(note, tam);
}

void mostrarNote(eNotebook note)
{

	printf(	"| %04d          %10s           %7s         %.2f\n", note.id, note.procesador, note.marca, note.precio);

}

void listarNote(eNotebook note[], int tam)
{
	printf(	"#======#======================#=================#=============#\n"
			"|  ID  |       PROCESADO      |      MARCA      |    PRECIO   |\n"
			"#======#======================#=================#=============#\n");
	for (int i = 0; i < tam; i++)
	{
		if(note[i].isEmpty == 0)
		{
			mostrarNote(note[i]);
		}
	}
	printf( "#======#======================#=================#=============#\n");
}
