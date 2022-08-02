#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main()
{
    
    
    printf("Proyecto Final de Programación estructurada\n");
    
    
    int z = 0;
    int y;
    int pesos;
    float pesosf;
    char ch[1];
    

    while (z != 3){
       
    printf("\nSeleccione El programa a correr \n");
    printf("1- Dispensador de billetes \n");
    printf("2- Juego de basketball\n");
    printf("3- Salir \n\n");
    scanf("%d", &z);
    switch(z)
    {
    case 1:
    system("clear");
    printf("Dispensador de billetes \n");
    printf("inserte la cantidad a retirar del cajero: \n"), scanf("%f", &pesosf);
    printf("%.0f Billete/s de 2000 \n", truncf(pesosf / 2000));
    pesosf = fmod(pesosf, 2000);
    printf("%.0f Billete/s de 1000 \n", truncf(pesosf / 1000));
    pesosf = fmod(pesosf, 1000);
    printf("%.0f Billete/s de 500 \n", truncf(pesosf / 500));
    pesosf = fmod(pesosf, 500);
    printf("%.0f Billete/s de 200 \n", truncf(pesosf / 200));
    pesosf = fmod(pesosf, 200);
    printf("%.0f Billete/s de 100 \n", truncf(pesosf / 100));
    pesosf = fmod(pesosf, 100);
    printf("%.0f Billete/s de 50 \n", truncf(pesosf / 50));
    pesosf = fmod(pesosf, 50);
    printf("%.0f Modena/s de 25 \n", truncf(pesosf / 25));
    pesosf = fmod(pesosf, 25);
    printf("%.0f Modena/s de 10 \n", truncf(pesosf / 10));
    pesosf = fmod(pesosf, 10);
    printf("%.0f Modena/s de 5 \n", truncf(pesosf / 5));
    pesosf = fmod(pesosf, 5);
    printf("%.0f Modena/s de 1 \n", truncf(pesosf / 1));
    pesosf = fmod(pesosf, 1);
    printf("%.0f Modena/s de 25 centavos\n", truncf(pesosf / 0.25));
    pesosf = fmod(pesosf, 0.25);
    printf("%.0f Modena/s de 10 centavos\n", truncf(pesosf / 0.10));
    pesosf = fmod(pesosf, 0.10);
    printf("%.0f Modena/s de 5 centavos\n", truncf(pesosf / 0.05));
    pesosf = fmod(pesosf, 0.05); 
    printf("%.0f chicle/s como no hay de 1 centavo/s \n", round(pesosf / 0.01));
    pesosf = fmod(pesosf, 0.01);
    printf("\n Espere para continuar\n"); 
    sleep(10);
    system("clear");
    break;
    
    case 2:
    system("clear");
    printf("Juego de basketball\n");
    printf("Nombre el primer equipo\n");
    char equipo1[20];
    scanf("%s", equipo1);
    printf("Nombre el segundo equipo\n");
    char equipo2[20];
    scanf("%s", equipo2);
    break;
    
    case 3:
    break;
    
    default:
    
    system("clear");
    printf("\n Espere para continuar...\n"), sleep(1);
     system("clear");
    printf("\n Espere para continuar..\n"), sleep(1);
     system("clear");
    printf("\n Espere para continuar.\n"), sleep(1);
    system("clear");
    break;
    }
    }
    system("clear");
    printf("\nLa ejecucion de este programa culmino \n");
    getch();
    
}
