#include <stdio.h>


int Dimension(char texto[]);

int main() {
    char cadena[100];

    printf("\ncodigo calcular el largo de un texto:\n\n");

    printf("Ingrese texto: ");
    fgets(cadena, 100, stdin);

    int largo = Dimension(cadena);

    printf("\nEl largo del texto es: %d\n", largo);

    return 0;
}

int Dimension(char texto[]) {
    int i = 0;
    while (texto[i] != '\0' && texto[i] != '\n') {
        i += 1;
    }
    return i;
}
