#include <stdio.h>

int main ()
{
    float nota1, nota2, nota3, media;

    printf("Introduzca nota del primer examen: ");
    scanf("%f", &nota1);
    printf("Introduzca nota del segundo examen: ");
    scanf("%f", &nota2);
    printf("Introduzca nota del tercer examen: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("La nota media es: %.2f", media);
    
    return 0;
}