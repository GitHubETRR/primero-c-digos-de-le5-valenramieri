#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMVEC 50
#define MIN 10
#define UNO 1

int contarMayor(int vec[], int tam);

int main() {
	int vector[TAMVEC];

	srand(time(NULL));

	printf("\nGenerando 50 valores entre 10 y 20:\n");

	for (int i = 0; i < TAMVEC; i++) {
		vector[i] = rand() % (MIN + UNO) + MIN;
		printf("vector[%d] = %d\n", i + UNO, vector[i]);
	}


	int repite = contarMayor(vector, TAMVEC);

	printf("\nEl numero mayor se repite %d veces.\n", repite);

	return 0;
}




int contarMayor(int vec[], int tam) {
	int mayor = vec[0];
	int rep = 0;


	for (int i = 1; i < tam; i++) {
		if (vec[i] > mayor) {
			mayor = vec[i];
		}
	}


	for (int i = 0; i < tam; i++) {
		if (vec[i] == mayor) {
			rep++;
		}
	}

	return rep;
}
