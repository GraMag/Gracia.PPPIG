#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 5


int main(void) {

	eNotebook note[TAM] = {{0, "intel", "hp", 400, 0}, {1, "intel", "asus", 430, 0}, {2, "amd", "hp", 200, 0}, {3, "pentium", "bangho", 100, 0}};
	float precio;


	ordenarNote(note, TAM);
	setbuf(stdout, NULL);
	printf("Ingrese el precio: \n");
	scanf("%f", &precio);

	printf("El descuento para %.2f es de $%.2f\n\n", precio, aplicarDescuento(precio));

	char string[20] = "Magali Mailen Gracia";
	char letra = 'a';
	printf("En la palabra %s la letra %c aparece %d veces", string, letra, contarCaracteres(string, letra));
	return EXIT_SUCCESS;
}
