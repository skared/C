#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int wyb=0;
float a, b, c, r, pol, h=0.0;
const float PI=3.14;

int main()
{
    for(;;){
    printf("MENU GLOWNE: \n");
    printf("1 - Kolo \n");
    printf("2 - Prostokat \n");
    printf("3 - Trojkat \n");
    printf("4 - Trapez \n");
    printf("5 - WYJSCIE \n");

    printf("Wybierz bryle: \n");
    scanf("%d", &wyb);

        switch(wyb){
        case 1:{
                printf("Podaj : \n");
                scanf("%f", &r);
                pol=(r * r * PI);
                printf("Pole kola o promieniu %.1f wynosi %.1f\n", r, pol);
                break;
        }
        case 2:{
                printf("Podaj bok A: \n");
                scanf("%f", &a);
                printf("Podaj bok B: \n");
                scanf("%f", &b);
                pol=(a * b);
                printf("Pole prostokata o boku A %.1f i boku B %.1f wynosi %.1f\n", a, b, pol);
                break;
        }
        case 3:{
                printf("Podaj bok A: \n");
                scanf("%f", &a);
                printf("Podaj wysokosc: \n");
                scanf("%f", &h);
                pol=(a * h)/ 2;
                printf("Pole trojkata o boku A %.1f i wysokosci %.1f wynosi %.1f\n", a, h, pol);
                break;
        }
        case 4:{
                printf("Podaj bok A: \n");
                scanf("%f", &a);
                printf("Podaj bok B: \n");
                scanf("%f", &b);
                printf("Podaj wysokosc: \n");
                scanf("%f", &h);
                pol=(a + b)*h / 2;
                printf("Pole trapezu o boku A %.1f boku B %.1f i wysokosc %.1f wynosi %.1f\n", a, b,h,pol);
                break;
        }

        case 5:{
                exit(0);
        }
        default:{
                printf("Zly wybor.\n");
                break;
        }
        }
        getchar();getchar();
        system("cls");
    }

    return 0;
}
