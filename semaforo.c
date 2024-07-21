#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("\n Listado de colores de un semaforo: ");
    printf("\n\n 1.-Rojo");
    printf("\n 2.-Verde");
    printf("\n 3.-Rojo");
    printf("\n\n Introduzca numero de color: ");

    scanf("%d", &n);

    switch ( n )
    {
        case 1: printf("\n Rojo significa: \"No pasar\"");
        break;
        case 2: printf("\n Verde significa: \"Adelante\"");
        break;
        case 3: printf("\n Amarillo significa: \"Advertencia\"");
        break;
        default: printf("\n ERROR, %d no esta asignado a nungun color.", n);
    }
    getch();
    return 0;
}