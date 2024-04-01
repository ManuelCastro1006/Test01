#include<stdio.h>
#include<conio.h>

int main ()
{
    int n1, n2, producto, suma;

    printf("\n Introduzca el primer numero (entero): ");
    scanf("%d", &n1);
    printf("\n introduzca el segundo numero (entero): ");
    scanf("%d", &n2);

    suma = n1 + n2;
    producto = n1 * n2;

    printf("\n la suma es %d", suma);
    printf("\n\n La multiplicaci%cn es: %d", 162, producto);

    getch();

    return 0;
}