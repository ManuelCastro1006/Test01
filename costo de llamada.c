#include <stdio.h>
#include <conio.h>

#define ESTABLECIMIENTO 12
#define MINUTO 18

int main()
{
    int duracion;
    float coste;

    printf("\n Introduzca la duraci%cn de la llamada: ", 162);
    scanf("%d", &duracion);

    coste = (float) (duracion + MINUTO + ESTABLECIMIENTO) / 100;

    printf("\n El coste de la llamada telef%cnica es: %.2f euros", 162, coste);

    getch();
    return 0;
}