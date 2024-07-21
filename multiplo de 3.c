#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Introduzca un n%cmero entero; ", 163);
    scanf("%d", &n);
    if (n % 3 == 0)
    printf("El n%cmero es m%cltiplo de 3", 163, 233);
    else
    printf("El n%cmero no es m%cltiplo de 3", 163, 233);

    getch();

    return 0;
}