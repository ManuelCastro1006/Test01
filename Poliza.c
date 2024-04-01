#include <stdio.h>
#include <conio.h>
int main(){
    int op, edad;
    float ppoliza, poliza;
    printf("Orefcemos 2 tipos de polizas: \n");
    printf("1-Plan A, Cobertura amplia\n");
    printf("2-Plan B, da%cos a terceros\n", 164);
    printf("Ingrese su opcion: ");
    scanf("%d", &op);

    switch (op){
        case 1:{
            poliza =1200;
            printf("Responda con las siguientes opciones, las siguientes preguntas\n");
            printf("1-SI\n2-NO\n");
            printf("Tiene habitos de beber alcohol?\n");
            scanf("%d", &op);

            if(op==1)
            ppoliza=(poliza*0.10)+ppoliza;
            else
            ppoliza=poliza;
            
            printf("Utiliza lentes?\n");
            scanf("%d", &op);

            if(op==1)
            ppoliza=(poliza*0.05)+ppoliza;

            printf("Padece alguna enfermedad como deficiencia ardiaca o diabetes?\n");
            scanf("%d", &op);

            if(op==1)
            ppoliza=(poliza*0.05)+ppoliza;

            printf("Ingrese la edad de la persona; ");
            scanf("%d", &edad);

            if (edad<40)
            ppoliza=(poliza*0.20)+ppoliza;
            else
            ppoliza=(poliza*0.10)+ppoliza;
            printf("El costo de la poliza es de: %.2f", ppoliza);
        }
        break;
        case 2:{
            poliza = 950;
             printf("Responda con las siguientes opciones, las siguientes preguntas\n");
            printf("1-SI\n2-NO\n");
            printf("Tiene habitos de beber alcohol?\n");
            scanf("%d", &op);

            if(op==1)
            ppoliza=(poliza*0.10)+ppoliza;
            else
            ppoliza=poliza;
            
            printf("Utiliza lentes?\n");
            scanf("%d", &op);

            if(op==1)
            ppoliza=(poliza*0.05)+ppoliza;

            printf("Padece alguna enfermedad como deficiencia ardiaca o diabetes?\n");
            scanf("%d", &op);

            if(op==1)
            ppoliza=(poliza*0.05)+ppoliza;

            printf("Ingrese la edad de la persona; ");
            scanf("%d", &edad);

            if (edad<40)
            ppoliza=(poliza*0.20)+ppoliza;
            else
            ppoliza=(poliza*0.10)+ppoliza;
            printf("El costo de la poliza es de: %.2f", ppoliza);
        }
        break;
    }
    getch();
    return 0;
}