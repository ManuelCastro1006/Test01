#include <stdio.h>
#include <stdlib.h>

int main (){
    int turismos, todoterrenos;
    int capTurismos, capTodot;
    int necesidadesCom;

    //Numero de vehiculos y capacidades
    printf("introduce el numero de turismos: ");
    scanf("%d",&turismos);
    printf("Introduce el numero de todoterrenos: ");
    scanf("%d",&todoterrenos);
    printf("introduce la capacidad de los turismos (litros): ");
    scanf("%d",&capTurismos);
    printf("Introduce la capacidad de los todoterrenos (litros): ");
    scanf("%d",&capTodot);

    //Calculo de necesidades de combustible
    necesidadesCom = turismos * capTurismos + todoterrenos + capTodot;
    printf("Las necesidades de combustible totales son (litros): %d", necesidadesCom);
    return 0;
}