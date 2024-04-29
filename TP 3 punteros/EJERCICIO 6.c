/* 6. Contar el número de ocurrencias de un elemento en un arreglo usando
puntero y funciones */ 

#include <stdio.h>

int contarOcurrencias(int *arr, int size, int elemento) {
    int contador = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) == elemento) {
            contador++; 
        }
    }

    return contador;
}

int main() {
    int arreglo[] = {1, 2, 3, 4, 5, 4, 1}; 
    int size = sizeof(arreglo) / sizeof(arreglo[0]); 
    int elemento = 1;
    int ocurrencias;

    ocurrencias = contarOcurrencias(arreglo, size, elemento);

    printf("El elemento %d aparece %d veces en el arreglo.\n", elemento, ocurrencias);

    return 0;
}
