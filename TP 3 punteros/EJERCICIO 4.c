/* 4. Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando
el resultado final. */

#include <stdio.h>

void copiarArreglo(int *origen, int *destino, int size) {
    for (int i = 0; i < size; i++) {
        *(destino + i) = *(origen + i); 
    }
}

int main() {
    int arreglo_origen[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arreglo_origen) / sizeof(arreglo_origen[0]);
    int arreglo_destino[size];

    copiarArreglo(arreglo_origen, arreglo_destino, size);

    printf("Arreglo original: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arreglo_origen[i]); 
    }

    printf("\nArreglo copiado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arreglo_destino[i]);
    }

    return 0;
}

