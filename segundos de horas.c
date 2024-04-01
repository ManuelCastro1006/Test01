#include <stdio.h>

int main()
{
    int horas, minutos, segundos, total;

    printf("Introduzca horas: ");
    scanf("%d", &horas);
    printf("Introduzca minutos: ");
    scanf("%d", &minutos);
    printf("Introduzca segundos: ");
    scanf("%d", &segundos);

    total = horas * 3600 + minutos * 60 + segundos;

    printf("Desde las 0:0:0 han pasado %d segundos", total);

    return 0;
}