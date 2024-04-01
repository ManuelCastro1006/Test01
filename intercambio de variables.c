#include <stdio.h>
#include <conio.h>

int main()
{
    int auxiliar, v1, v2;

    printf("\n Introduzca el primer valor: ");
    scanf("%d", &v1);
    printf("\n Introduzca el segundo valor: ");
    scanf("%d", &v2);

    printf("\nIntercambiando valores...");

    auxiliar = v1;
    v1 = v2;
    v2 = auxiliar;
    printf("\n\n Ahora el valor 1 es: %d", v1);
    printf("\n\n Ahora el valor 2 es: %d", v2);

    return 0;
}