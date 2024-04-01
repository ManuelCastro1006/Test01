#include <stdio.h>
#include <conio.h>

int main()
{
    int numero;

    printf("\n Introduzca un numero: ");
    scanf("%d", &numero);

    printf("\n Elnumero anterior es: %d", numero - 1);
    printf("\n\n ELnumero siguientes es: %d", numero + 1);

    getch();

    return 0;
}