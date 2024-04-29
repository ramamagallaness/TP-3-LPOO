/* 5. Concatenar dos cadenas usando punteros y funciones. */

#include <stdio.h>
#include <string.h>

void concatenarCadenas(char *cadena1, char *cadena2, char *resultado) {
    while (*cadena1) {
        *resultado = *cadena1; 
        cadena1++;
        resultado++;
    }

    while (*cadena2) {
        *resultado = *cadena2;
        cadena2++;
        resultado++;
    }

    *resultado = '\0'; 
}

int main() {
    char cadena1[] = "AGUANTE "; 
    char cadena2[] = "RIVER"; 
    char resultado[50]; 

    concatenarCadenas(cadena1, cadena2, resultado);

    printf("Cadena concatenada: %s\n", resultado);

    return 0;
}

