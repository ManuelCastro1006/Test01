#include<stdio.h>

int main()
{
    int n1, n2, r, s;

    printf("Introduzca un n%cmero entero; ", 163);
    scanf("%d", &n1);
    printf("Introduzca un segundo n%cmero entero: ", 163);
    scanf("%d", &n2);
    printf("Cu%cnto suman?: ", 160);
    scanf("%d", &s);

    r = n1 + n2;

    if (s == r)
    printf("Correcto imbecil");
    else
    printf("no, q pendejo, la respuesta es %d", r);
    
    return 0;
}