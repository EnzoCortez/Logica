#include <stdio.h>
/*Leer un número entero de 3 dígitos y determinar si tiene el dígito 1.*/



int main() {
    int numero;

    printf("Ingrese un número entero de 3 dígitos: ");
    scanf("%d", &numero);
    
    if (numero >= 100 && numero <= 999) {
        int digito;
        int tieneDigito1 = 0;
        while (numero > 0) {
            digito = numero % 10;
            if (digito == 1) {
                tieneDigito1 = 1;
                break;
            }
            numero = numero / 10;
    }        if (tieneDigito1) {
            printf("El número contiene el dígito 1.\n");
        }
        } else {
            printf("El número no contiene el dígito 1.\n");
        }


}
