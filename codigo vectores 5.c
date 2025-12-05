#include <stdio.h>

#define TAM 3   


void cargarVector(int v[]);
int productoEscalar(int v1[], int v2[]);

int main() {
    int A[TAM];
    int B[TAM];
    int resultado;

    printf("Cargar vector A:\n");
    cargarVector(A);

    printf("\nCargar vector B:\n");
    cargarVector(B);

    resultado = productoEscalar(A, B);

    printf("\nEl producto escalar es: %d\n", resultado);

    return 0;
}


void cargarVector(int v[]) {
    int i;
    for (i = 0; i < TAM; i++) {
        printf("Componente %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}


int productoEscalar(int v1[], int v2[]) {
    int i;
    int suma = 0;

    for (i = 0; i < TAM; i++) {
        suma += v1[i] * v2[i];
    }

    return suma;
}
