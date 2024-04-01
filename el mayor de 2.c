#include <stdio.h>
int main () {
    int x, y;
    printf("Escribe un el primer numero: ");
    if (scanf("%d", &x) !=1) {
        printf("Error, debe ingresar un numero.\n");
        return 1;
    }
    printf("Escribe el segundo numero: ");
    if (scanf("%d", &y) !=1) {
        printf("Error, debe ingresar un numero.\n");
        return 1;
    }
    if (x == y) {
        printf("son iguales");
    }
    else if (x < y) {
        printf("El mayor es y= %d", y);
    }
    else {
        printf("El mayor es x= %d", x);
    }
    return 0;
}