#include <stdio.h>

#define MAX_TEXTO 200


void Invertir(char texto[], char invertido[]);
int LargoCadena(char texto[]);

int main() {
    char texto[MAX_TEXTO];
    char invertido[MAX_TEXTO];

    printf("Ingrese un texto: ");
    fgets(texto, MAX_TEXTO, stdin);

    Invertir(texto, invertido);

    printf("Texto invertido: %s\n", invertido);

    return 0;
}


int LargoCadena(char texto[]) {
    int i = 0;
    while (texto[i] != '\0' && texto[i] != '\n') {
        i++;
    }
    return i;
}


void Invertir(char texto[], char invertido[]) {
    int largo = LargoCadena(texto);
    int i, j = 0;

    for (i = largo - 1; i >= 0; i--) {
        invertido[j] = texto[i];
        j++;
    }

    invertido[j] = '\0';
}
