#include<conio.h>
#include<stdio.h>

int main ()
{
    int auxiliar, v1, v2, v3;

    printf("\n Introduzca el valor 1: ");
    scanf("%d", &v1);
    printf("\n Introduzca el valor 2: ");
    scanf("%d", &v2);
    printf("\n Introduzca el valor 3: ");
    scanf("%d", &v3);

    printf("\n\n Intercambiando valores...");

    auxiliar = v3;
    v3 = v2;
    v2 = v1;
    v1 = auxiliar;

    printf("\n\n ahora el valor 1 es %d", v1);
    printf("\n Ahora el valor 2 es %d", v2);
    printf("\n Ahora el valor 3 es %d", v3);

    getch();
    return 0;
}