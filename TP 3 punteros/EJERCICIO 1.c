/* 1. Intercambiar el valor de dos variables usando punteros y funciones.
Mostrando los valores iniciales y valores finales. */

#include <stdio.h>

int i = 5, x = 10;
void 	Intercambio(int *a, int *b);

int main(){
	printf("Antes del cambio: i=%d, x=%d\n", i, x);
	Intercambio(&i, &x);
	printf("Despues del cambio: i=%d, x=%d\n", i, x);
	return 0;
}

void Intercambio(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


