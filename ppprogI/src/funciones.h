#ifndef FUNCIONES_H_
#define FUNCIONES_H_

typedef struct
{
	int id;
	char procesador[20];
	char marca[20];
	float precio;
	int isEmpty;
}eNotebook;

#endif /* FUNCIONES_H_ */

float aplicarDescuento (float precio);
int contarCaracteres(char string[], char letra);
void mostrarNote(eNotebook note);
void listarNote(eNotebook note[], int tam);
void ordenarNote(eNotebook note[], int tam);
