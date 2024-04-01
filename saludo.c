#include<stdio.h>
#include<conio.h>

int main(){
    char nombre [20];

    printf("Introduzca un nombre: ");
    scanf("%s", nombre);
    printf("Hola %s, buenos d%cas.", nombre, 161);

    getch();/*Pausa*/
    
    return 0;
}