#include <conio.h>
#include <stdio.h>

int main()
{
    int auxiliar, a, b, c;

    printf("\n Introduzca el primer valor: ");
    scanf("%d", &a);
    printf("\n Introduzca el segundo valor: ");
    scanf("%d", &b);
    printf("\n Introduzca el tercer valor: ");
    scanf("%d", &c);
    printf("\n Intercambiando valores...");

    auxiliar = b;
    b = a + c;
    a = c * 2;
    c = auxiliar * 3;

    printf("\n\n Ahora el valor a es: %d", a);
    printf("\n Ahora el valor b es: %d", b);
    printf("\n Ahora el valor c es; %d", c);

    getch();

    return 0;
}