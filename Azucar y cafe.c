#include <stdio.h>
#include <conio.h>

#define coste_azucar .6
#define coste_cafe .72

int main()
{
    float cantidad, kilos_azucar, kilos_cafe;

    printf("\n Introduzca cantidad: ");
    scanf("%f", &cantidad);
    
    kilos_azucar = cantidad / 2 / coste_azucar;
    kilos_cafe = cantidad / 3 / coste_cafe;
    cantidad = cantidad / 6;

    printf("\n %.2f Kilos de az%ccar", kilos_azucar, 163);
    printf("\n\n %.2f Kilos de caf%c", kilos_cafe, 130);
    printf("\n\n Quedan %.2f euros", cantidad);

    getch();
    return 0;
}