#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Listado de planetas: \n");
    printf(" 1.Mercurio\n");
    printf(" 2.Venus\n");
    printf(" 3.Tierra\n");
    printf(" 4.Marte\n");
    printf(" 5.Júpiter\n");
    printf(" 6.Saturno\n");
    printf(" 7.Urano\n");
    printf(" 8.Neptuno\n");
    printf(" 9.Plutón\n");

    scanf("%d", &n);

    switch (n)
    {
        case 1: printf("Mercurio est%c a 59 Mkm del Sol", 160);
        break;
        case 2: printf("Veus est%c a 108 Mkm del Sol", 160);
        break;
        case 3: printf("Tierra est%c a 150 Mkm del Sol", 160);
        break;
        case 4: printf("Marte est%c a 228 Mkm del Sol", 160);
        break;
        case 5: printf("J%cpiter est%c a 750 Mkm del Sol", 163, 160);
        break;
        case 6: printf("Saturno est%c a 1431 Mkm del Sol", 160);
        break;
        case 7: printf("Urano est%c a 2877 Mkm del Sol", 160);
        break;
        case 8: printf("Neptuno est%c a 4509 Mkm del Sol",160);
        break;
        case 9: printf("Plut%cn est%c a 5916 Mkm del sol...espera... Plut%cn ni quiera es un pinche planeta",162, 160, 162);
        break;
        default:  printf("ERORR %d no esta asociado aun, falta nvestigacion, o datos en este repositorio", n);
    }
    getch();
    return 0;
}