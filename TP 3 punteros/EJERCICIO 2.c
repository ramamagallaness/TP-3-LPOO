/* 2. Encontrar la suma y el promedio de los elementos de un arreglo usando
punteros y funciones. */

#include <stdio.h>

void calcularSumaYPromedio(int *arr, int size, int *suma, float *promedio) {
    *suma = 0; 
    *promedio = 0.0;

    for (int i = 0; i < size; i++) {
        *suma += *(arr + i); 
    }

    *promedio = (float)(*suma) / size;
}

int main() {
    int arreglo[] = {1, 10, 10};
    int size = sizeof(arreglo) / sizeof(arreglo[0]);
    int suma;
    float promedio;

    calcularSumaYPromedio(arreglo, size, &suma, &promedio);

    printf("La suma de los elementos del arreglo es: %d\n", suma);
    printf("El promedio de los elementos del arreglo es: %.2f\n", promedio);

    return 0;
}

