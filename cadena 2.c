#include <stdio.h>


void pasaMinuscula(char texto[]);

int main() {
    char cadena[100];

    printf("\n codigo convertir un texto a minusculas:\n\n");

    printf("Ingrese un texto: ");
    fgets(cadena, 100, stdin);

    pasaMinuscula(cadena);

    printf("\nTexto en minuscula: %s\n", cadena);

    return 0;
}

void pasaMinuscula(char texto[]) {
    int i = 0;
    while (texto[i] != '\0') {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + 32;
        }
        i += 1;
    }
}
