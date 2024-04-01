#include <stdio.h>

int main(){
    int anio;

    printf("Introduzca a%co; ", 164);
    scanf("%d", &anio);

    if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0) {
        printf("ES BISIESTO");
    }
    else {
        printf("NO ES BISIESTO");
    }
    return 0;
}