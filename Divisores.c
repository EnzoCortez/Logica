#include <stdio.h>
/*Leer un número entero 
y mostrar todos los divisores exactos del número comprendidos entre 1 y el número leído.*/

int num;
int i;
int div;

int main(){

    printf("-----------Menu------------- \n" );
    printf("Ingrese un valor: ");
    scanf("%d",&num);

    for (i=1;i<=num;i++){    
    div=num/i;
        if (div !=0)
        {
            printf("El número %d no es divisor exacto de %d\n", i, num);
        }
    }
}