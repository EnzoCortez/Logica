#include <stdio.h>

/*Se define la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va sumando progresivamente los dos últimos elementos de la serie, así: 0 1 1 2 3 5 8 13 21 34....... 
Utilizando el concepto de ciclo, 
generar la serie de Fibonacci hasta llegar o sobrepasar el número 10000.*/

int main(){
    int numeroActual = 0;
    int numeroSiguiente = 1;

    printf("Serie de Fibonacci hasta llegar o sobrepasar 10,000:\n");

    while (numeroActual <= 10000) {

        printf("%d ", numeroActual);

        int temp = numeroSiguiente;
        numeroSiguiente = numeroActual + numeroSiguiente;
        numeroActual = temp;
        }
    printf("\n");
}