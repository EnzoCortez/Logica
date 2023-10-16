#include <stdio.h>

/*Leer un número entero y determinar a cuánto es igual la suma de sus dígitos.*/

int main(){
    int numero, digito, suma = 0;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10; // Obtiene el último dígito
        suma += digito; // Agrega el dígito a la suma total
        numero = numero / 10;
        }


}