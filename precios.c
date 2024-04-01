#include <stdio.h>
#include <stdlib.h>
int main(){
    double precio1, precio2, precio3, media;
    //Datos
    printf("Introtuzca el precio establecido 1, en dolares: ");
    scanf("%lf", &precio1);
    printf("Introduzca el precio establecido 2, en dolares: ");
    scanf("%lf", &precio2);
    printf("Introduzca el precio establecido 3, en dolares: ");
    scanf("%lf", &precio3);
    //Calculo
    media = (precio1 + precio2 + precio3) /3;
    printf("El preciomedio del producto es %lf dolares", media);
    return 0;
}