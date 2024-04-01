#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    const double Pi = 3.141593;//Numero pi como constante
    double D, H, R, V;
    //Datos
    printf("introduzca el daimetro, en metros: "); scanf("%lf", &D);
    printf("introduzca la altura, en metros: "); scanf("%lf", &H);
    //Calculo
    R = D/2; V = Pi * pow(R, 2) * H;
    printf("El volumen de cilindro es de %lf metros cubicos",V);
    return 0;
}