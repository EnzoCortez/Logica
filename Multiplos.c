#include <stdio.h>

/*Leer un número entero y mostrar todos sus componentes numéricos, o sea, aquellos para quienes él sea un múltiplo.*/


int main() {
    int numero;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    printf("Los componentes numéricos de %d son: ", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

}
