#include<stdio.h>
#include<conio.h>

int main(){
    char letra;
    printf("Introduzca una letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'A' ||
    letra == 'e' || letra == 'E' ||
    letra == 'i' || letra == 'I' ||
    letra == 'o' || letra == 'O' ||
    letra == 'u' || letra == 'U')
    printf("Es una vocal");
    else
    printf("No es una vocal");
    getch();
    return 0;
}